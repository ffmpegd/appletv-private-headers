/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import "VoiceServices-Structs.h"
#import "VSRecognitionAction.h"

@class NSString, NSAttributedString, NSArray;

@interface VSRecognitionRecognizeAction : VSRecognitionAction {
	NSString *_modelIdentifier;	// 24 = 0x18
	NSArray *_keywords;	// 28 = 0x1c
	void *_recognition;	// 32 = 0x20
	NSArray *_results;	// 36 = 0x24
	NSString *_debugDumpPath;	// 40 = 0x28
	NSString *_audioInputPath;	// 44 = 0x2c
	double _levelInterval;	// 48 = 0x30
	struct {
		unsigned debugDumpEnabled : 1;
		unsigned preferredEngine : 2;
		unsigned resetEngine : 1;
		unsigned bluetoothAllowed : 1;
		unsigned hasStarted : 1;
	} _recognizeFlags;	// 56 = 0x38
}
@property(readonly, retain) NSString *modelIdentifier;	// G=0x328e3671; converted property
- (id)initWithModelIdentifier:(id)modelIdentifier;	// 0x328e3709
- (id)_actionForEmptyResults;	// 0x328e36dd
- (void)_configureNewRecognitionInstance;	// 0x328e412d
- (void)_continueAfterDeferredStart;	// 0x328e3929
- (VSRecognitionRef)_createRecognitionInstanceWithCallbacks:(XXStruct__Vsh7C *)callbacks info:(void *)info;	// 0x328e4255
- (id)_debugDumpPath;	// 0x328e36cd
- (void)_handleRecognitionCompleted:(VSRecognitionRef)completed withResults:(CFArrayRef)results error:(CFErrorRef)error;	// 0x328e3b69
- (void)_handleRecognitionPrepared:(VSRecognitionRef)prepared;	// 0x328e3981
- (void)_handleRecognitionStarted:(VSRecognitionRef)started;	// 0x328e36e1
- (void)_handledThreadedResults:(id)results nextAction:(id)action;	// 0x328e39e1
- (BOOL)_hasDeferredStartCallback;	// 0x328e3681
- (float)_inputLevel;	// 0x328e44cd
- (BOOL)_isActivelyRecognizing;	// 0x328e455d
- (BOOL)_isRecognizing;	// 0x328e4585
- (id)_keywordAtIndex:(int)index;	// 0x328e37dd
- (int)_keywordCount;	// 0x328e3825
- (BOOL)_keywordIndexChanged;	// 0x328e384d
- (id)_keywords;	// 0x328e3749
- (void)_releaseFromPrepare;	// 0x328e3fad
- (void)_reset;	// 0x328e3a29
- (BOOL)_setAudioInputPath:(id)path;	// 0x328e42e9
- (BOOL)_setBluetoothInputAllowed:(BOOL)allowed;	// 0x328e3685
- (BOOL)_setDebugDumpEnabled:(BOOL)enabled;	// 0x328e3881
- (BOOL)_setDebugDumpEnabled:(BOOL)enabled dumpPath:(id)path;	// 0x328e43c1
- (BOOL)_setDebugDumpPath:(id)path;	// 0x328e3899
- (BOOL)_setEngineResetRequired:(BOOL)required;	// 0x328e4289
- (BOOL)_setInputLevelUpdateInterval:(double)interval;	// 0x328e4511
- (BOOL)_setPreferredEngine:(int)engine;	// 0x328e4361
- (void)_setResults:(id)results;	// 0x328e3939
- (id)cancel;	// 0x328e4001
- (int)completionType;	// 0x328e366d
- (void)dealloc;	// 0x328e3aa5
// converted property getter: - (id)modelIdentifier;	// 0x328e3671
- (id)perform;	// 0x328e405d
@end

