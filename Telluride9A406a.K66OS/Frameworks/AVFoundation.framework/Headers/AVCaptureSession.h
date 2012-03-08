/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, AVCaptureSessionInternal, NSString;

@interface AVCaptureSession : NSObject {
@private
	AVCaptureSessionInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *inputs;	// G=0x30ebecc9; 
@property(readonly, assign, nonatomic, getter=isInterrupted) BOOL interrupted;	// G=0x30eb7e25; 
@property(readonly, assign, nonatomic) NSArray *outputs;	// G=0x30ebd825; 
@property(readonly, assign, nonatomic, getter=isRunning) BOOL running;	// G=0x30eb7e45; 
@property(copy, nonatomic) NSString *sessionPreset;	// G=0x30ebf021; S=0x30ebee3d; 
@property(retain) id videoPreviewLayer;	// G=0x30eb7e05; S=0x30ebcd71; converted property
+ (id)avCaptureSessionPlist;	// 0x30eb81dd
+ (void)initialize;	// 0x30eb7db9
- (id)init;	// 0x30eb8119
- (void)_addConnection:(id)connection;	// 0x30ebc7ad
- (id)_addFastSwitchOptionsToCaptureOptions:(id)captureOptions forDevice:(id)device preset:(id)preset;	// 0x30ebaab9
- (void)_addInputWithNoConnections:(id)noConnections;	// 0x30ebdd51
- (void)_addOutputWithNoConnections:(id)noConnections;	// 0x30ebd26d
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x30ebaba9
- (void)_beginConfiguration;	// 0x30ebedf9
- (void)_beginSessionUpdates;	// 0x30eb7e65
- (BOOL)_buildAndRunGraph;	// 0x30eb8f31
- (BOOL)_canAddConnection:(id)connection failureReason:(id *)reason;	// 0x30ebca2d
- (BOOL)_canAddInput:(id)input failureReason:(id *)reason;	// 0x30ebe6d5
- (BOOL)_canAddOutput:(id)output failureReason:(id *)reason;	// 0x30ebd641
- (void)_commitConfiguration;	// 0x30ebedad
- (id)_connectionsForNewInputPort:(id)newInputPort;	// 0x30eba8d5
- (id)_connectionsForNewOutput:(id)newOutput;	// 0x30eba67d
- (id)_createCaptureOptionsForPreset:(id)preset audioDevice:(id)device videoDevice:(id)device3 errorStatus:(int *)status;	// 0x30ebaf71
- (long)_createRecorderIfNeeded;	// 0x30ebb469
- (id)_currentVideoDevice;	// 0x30eb8cd5
- (void)_doDidStart;	// 0x30eb9d75
- (void)_doDidStartSources;	// 0x30eba045
- (void)_doDidStop:(id)_do;	// 0x30eb9bf9
- (void)_doWillStart;	// 0x30eb9f95
- (void)_endSessionUpdates;	// 0x30eba2e1
- (id)_errorForFigRecorderNotification:(id)figRecorderNotification;	// 0x30eb8c09
- (void)_excludeOutputsForCaptureOptions:(id)captureOptions;	// 0x30ebb2e5
- (BOOL)_figRecorderOldOptionsAreEqual:(id)equal toNewOptions:(id)newOptions livesourceOptionsAreEqual:(BOOL *)equal3;	// 0x30eb9abd
- (id)_figRecorderOptionsForPreset:(id)preset audioDevice:(id)device videoDevice:(id)device3;	// 0x30ebaa49
- (void)_handleNotification:(id)notification payload:(id)payload;	// 0x30eb8211
- (id)_liveConnections;	// 0x30ebc4e5
- (void)_postRuntimeError:(id)error;	// 0x30eba261
- (void)_rebuildGraph;	// 0x30ebbc2d
- (void)_rebuildInternalCaptureOptions;	// 0x30ebb1e5
- (void)_removeConnection:(id)connection;	// 0x30ebc5c9
- (void)_removeConnectionsForInputPort:(id)inputPort;	// 0x30eba4dd
- (void)_removeVideoPreviewLayerConnectionsForInputPort:(id)inputPort;	// 0x30eba315
- (BOOL)_sessionHasEnabledMovieFileOutput;	// 0x30ebadd1
- (void)_setInterrupted:(BOOL)interrupted;	// 0x30ebc471
- (void)_setRunning:(BOOL)running;	// 0x30ebbd21
- (BOOL)_startPreviewing;	// 0x30ebc0d9
- (long)_startRecording;	// 0x30ebbcbd
- (void)_stopAndTearDownGraph;	// 0x30eb8e39
- (id)_stopError;	// 0x30eb7e69
- (BOOL)_stopPreviewing;	// 0x30ebbe25
- (long)_stopRecording;	// 0x30ebbc59
- (void)_teardownFigRecorder;	// 0x30ebf4ed
- (void)addConnection:(id)connection;	// 0x30ebc9c1
- (void)addInput:(id)input;	// 0x30ebe345
- (void)addInputWithNoConnections:(id)noConnections;	// 0x30ebe12d
- (void)addOutput:(id)output;	// 0x30ebd471
- (void)addOutputWithNoConnections:(id)noConnections;	// 0x30ebd42d
- (void)beginConfiguration;	// 0x30ebee2d
- (BOOL)canAddConnection:(id)connection;	// 0x30ebca15
- (BOOL)canAddInput:(id)input;	// 0x30ebe6bd
- (BOOL)canAddOutput:(id)output;	// 0x30ebd629
- (BOOL)canSetSessionPreset:(id)preset;	// 0x30ebf105
- (id)captureOptions;	// 0x30ebb6d1
- (void)commitConfiguration;	// 0x30ebee1d
- (void)dealloc;	// 0x30ebf359
- (id)description;	// 0x30ebe171
- (id)inputWithClass:(Class)aClass;	// 0x30ebe969
// declared property getter: - (id)inputs;	// 0x30ebecc9
- (BOOL)isBeingConfigured;	// 0x30eb7ddd
// declared property getter: - (BOOL)isInterrupted;	// 0x30eb7e25
- (BOOL)isPreviewing;	// 0x30ebc179
// declared property getter: - (BOOL)isRunning;	// 0x30eb7e45
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x30ebb725
- (id)outputWithClass:(Class)aClass;	// 0x30ebeb19
// declared property getter: - (id)outputs;	// 0x30ebd825
- (OpaqueFigRecorder *)recorder;	// 0x30eb7dbd
- (void)removeConnection:(id)connection;	// 0x30ebc759
- (void)removeInput:(id)input;	// 0x30ebd909
- (void)removeOutput:(id)output;	// 0x30ebcf95
- (void)removeVideoPreviewLayer;	// 0x30ebcf5d
// declared property getter: - (id)sessionPreset;	// 0x30ebf021
// declared property setter: - (void)setSessionPreset:(id)preset;	// 0x30ebee3d
// converted property setter: - (void)setVideoPreviewLayer:(id)layer;	// 0x30ebcd71
- (void)startRunning;	// 0x30ebc331
- (void)stopRunning;	// 0x30ebc1f1
// converted property getter: - (id)videoPreviewLayer;	// 0x30eb7e05
- (void)videoPreviewLayerPropertiesChanged;	// 0x30ebb715
@end
