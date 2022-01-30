function varargout = TrafficSystem(varargin)
% TRAFFICSYSTEM MATLAB code for TrafficSystem.fig
%      TRAFFICSYSTEM, by itself, creates a new TRAFFICSYSTEM or raises the existing
%      singleton*.
%
%      H = TRAFFICSYSTEM returns the handle to a new TRAFFICSYSTEM or the handle to
%      the existing singleton*.
%
%      TRAFFICSYSTEM('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in TRAFFICSYSTEM.M with the given input arguments.
%
%      TRAFFICSYSTEM('Property','Value',...) creates a new TRAFFICSYSTEM or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before TrafficSystem_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to TrafficSystem_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help TrafficSystem

% Last Modified by GUIDE v2.5 27-Jan-2022 18:13:33

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @TrafficSystem_OpeningFcn, ...
                   'gui_OutputFcn',  @TrafficSystem_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before TrafficSystem is made visible.
function TrafficSystem_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to TrafficSystem (see VARARGIN)

% Choose default command line output for TrafficSystem
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes TrafficSystem wait for user response (see UIRESUME)
% uiwait(handles.figure1);
delete(instrfind({'Port'},{'COM5'}))
global ArduinoObject;
global c_counter;
global p_counter;
global flag ;
flag = 1 ;
c_counter = 10;
p_counter = 5;
global carImg ;
global pedImg ;
carImg = imread('car.jpg');
pedImg = imread('ped.jpg');
ArduinoObject = arduino('COM5','UNO');
configurePin(ArduinoObject,'D5','DigitalOutput');
configurePin(ArduinoObject,'D6','DigitalOutput');
configurePin(ArduinoObject,'D7','DigitalOutput');
writeDigitalPin(ArduinoObject,'D5',0)
writeDigitalPin(ArduinoObject,'D6',0)
writeDigitalPin(ArduinoObject,'D7',0)
% --- Outputs from this function are returned to the command line.
function varargout = TrafficSystem_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function maintLabel_Callback(hObject, eventdata, handles)
% hObject    handle to maintLabel (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of maintLabel as text
%        str2double(get(hObject,'String')) returns contents of maintLabel as a double


% --- Executes during object creation, after setting all properties.
function maintLabel_CreateFcn(hObject, eventdata, handles)
% hObject    handle to maintLabel (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function lightsOFF()
global ArduinoObject;
writeDigitalPin(ArduinoObject,'D5',0)
writeDigitalPin(ArduinoObject,'D6',0)
writeDigitalPin(ArduinoObject,'D7',0)

% --- Executes on button press in manual.
function manual_Callback(hObject, eventdata, handles)
% hObject    handle to manual (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
handles.maintLabel.Visible = 'off';
handles.manual.Visible = 'off';
handles.autoBtn.Visible = 'off';
%%%%%%%%%%%%%%%%%%%%%%%
handles.redBtn.Visible = 'on';
handles.greenBtn.Visible = 'on';
handles.yellowBtn.Visible = 'on';
handles.Return.Visible = 'on';
handles.MaualLabel.Visible = 'on';

cla(handles.axes1)
handles.axes1.Visible ='off';
% --- Executes on button press in autoBtn.
function autoBtn_Callback(hObject, eventdata, handles)
% hObject    handle to autoBtn (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
handles.maintLabel.Visible = 'off';
handles.manual.Visible = 'off';
handles.autoBtn.Visible = 'off';
%%%%%%%%%%%%%%%%%%%%%%%
handles.edit7.Visible = 'on';
handles.edit6.Visible = 'on';
handles.p_timer.Visible = 'on';
handles.c_timer.Visible = 'on';
handles.Return.Visible = 'on';
handles.proceed.Visible = 'on';
handles.autoLabel.Visible = 'on';

function MaualLabel_Callback(hObject, eventdata, handles)
% hObject    handle to MaualLabel (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of MaualLabel as text
%        str2double(get(hObject,'String')) returns contents of MaualLabel as a double


% --- Executes during object creation, after setting all properties.
function MaualLabel_CreateFcn(hObject, eventdata, handles)
% hObject    handle to MaualLabel (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in Return.
function Return_Callback(hObject, eventdata, handles)
% hObject    handle to Return (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

global flag ;
flag = 0 ;

handles.maintLabel.Visible = 'on';
handles.manual.Visible = 'on';
handles.autoBtn.Visible = 'on';
%%%%%%%%%%%%%%%%%%%%%%%
handles.redBtn.Visible = 'off';
handles.greenBtn.Visible = 'off';
handles.yellowBtn.Visible = 'off';
handles.Return.Visible = 'off';
handles.MaualLabel.Visible = 'off';
%%%%%%%%%%%%%%%%%%%%%%%
handles.edit7.Visible = 'off';
handles.edit6.Visible = 'off';
handles.p_timer.Visible = 'off';
handles.c_timer.Visible = 'off';
handles.Return.Visible = 'off';
handles.proceed.Visible = 'off';
%%%%%%%%%%%%%
handles.autoLabel.Visible = 'off';
handles.axes1.Visible = 'off';
handles.axes2.Visible = 'off';
handles.carCount.Visible = 'off';
handles.pedCount.Visible = 'off';

cla(handles.axes1)
handles.axes1.Visible ='off';

lightsOFF()

function c_timer_Callback(hObject, eventdata, handles)
% hObject    handle to c_timer (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of c_timer as text
%        str2double(get(hObject,'String')) returns contents of c_timer as a double


% --- Executes during object creation, after setting all properties.
function c_timer_CreateFcn(hObject, eventdata, handles)
% hObject    handle to c_timer (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function p_timer_Callback(hObject, eventdata, handles)
% hObject    handle to p_timer (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of p_timer as text
%        str2double(get(hObject,'String')) returns contents of p_timer as a double


% --- Executes during object creation, after setting all properties.
function p_timer_CreateFcn(hObject, eventdata, handles)
% hObject    handle to p_timer (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit6_Callback(hObject, eventdata, handles)
% hObject    handle to edit6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global c_counter;

c_counter =  str2double(get(hObject,'String')) ;


% Hints: get(hObject,'String') returns contents of edit6 as text
%        str2double(get(hObject,'String')) returns contents of edit6 as a double


% --- Executes during object creation, after setting all properties.
function edit6_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit7_Callback(hObject, eventdata, handles)
% hObject    handle to edit7 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global p_counter;
p_counter =  str2double(get(hObject,'String')) ;

% Hints: get(hObject,'String') returns contents of edit7 as text
%        str2double(get(hObject,'String')) returns contents of edit7 as a double


% --- Executes during object creation, after setting all properties.
function edit7_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit7 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function autoLabel_Callback(hObject, eventdata, handles)
% hObject    handle to autoLabel (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of autoLabel as text
%        str2double(get(hObject,'String')) returns contents of autoLabel as a double


% --- Executes during object creation, after setting all properties.
function autoLabel_CreateFcn(hObject, eventdata, handles)
% hObject    handle to autoLabel (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in redBtn.
function redBtn_Callback(hObject, eventdata, handles)
% hObject    handle to redBtn (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global ArduinoObject;
writeDigitalPin(ArduinoObject,'D5',1)
writeDigitalPin(ArduinoObject,'D6',0)
writeDigitalPin(ArduinoObject,'D7',0)

% --- Executes on button press in greenBtn.
function greenBtn_Callback(hObject, eventdata, handles)
% hObject    handle to greenBtn (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global ArduinoObject;
writeDigitalPin(ArduinoObject,'D5',0)
writeDigitalPin(ArduinoObject,'D6',0)
writeDigitalPin(ArduinoObject,'D7',1)

% --- Executes on button press in yellowBtn.
function yellowBtn_Callback(hObject, eventdata, handles)
% hObject    handle to yellowBtn (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global ArduinoObject;
writeDigitalPin(ArduinoObject,'D5',0)
writeDigitalPin(ArduinoObject,'D6',1)
writeDigitalPin(ArduinoObject,'D7',0)


% --- Executes on button press in proceed.
function proceed_Callback(hObject, eventdata, handles)
% hObject    handle to proceed (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

global c_counter  ;
global p_counter  ;
global flag ;
global carImg ;
global pedImg ;
flag = 1 ;
%%%%%%%%%%%%%%%%%%%%%%%
handles.edit7.Visible = 'off';
handles.edit6.Visible = 'off';
handles.p_timer.Visible = 'off';
handles.c_timer.Visible = 'off';
handles.proceed.Visible = 'off';

%%%%%%%%%%%%%%%%%%%%%%%%
handles.autoLabel.Visible = 'on';
handles.axes1.Visible = 'on';
handles.axes2.Visible = 'on';
handles.carCount.Visible = 'on';
handles.pedCount.Visible = 'on';

handles.axes1.Visible ='on';
axes(handles.axes1);
%%%%%%%%%%%%%%%%%%%%%%%%
while (1)
    if(flag == 1)   
        
    imshow(carImg);
    for cnt = 1 : c_counter
        set(handles.carCount,'String', num2str(cnt));
        pause(1);
    end
    else 
       break
    end
    
    if(flag == 1)   
    set(handles.carCount,'String', '');
     imshow(pedImg);
    for cnt = 1 : p_counter
        set(handles.pedCount,'String', num2str(cnt));    
        pause(1);
    end  
    else 
        break
    end
    set(handles.pedCount,'String', '');
    
end

function carCount_Callback(hObject, eventdata, handles)
% hObject    handle to carCount (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of carCount as text
%        str2double(get(hObject,'String')) returns contents of carCount as a double


% --- Executes during object creation, after setting all properties.
function carCount_CreateFcn(hObject, eventdata, handles)
% hObject    handle to carCount (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function pedCount_Callback(hObject, eventdata, handles)
% hObject    handle to pedCount (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of pedCount as text
%        str2double(get(hObject,'String')) returns contents of pedCount as a double


% --- Executes during object creation, after setting all properties.
function pedCount_CreateFcn(hObject, eventdata, handles)
% hObject    handle to pedCount (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end
