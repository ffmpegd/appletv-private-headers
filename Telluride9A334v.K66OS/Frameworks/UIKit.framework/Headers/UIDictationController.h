/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSArray, UIDictationView, NSTimer;

__attribute__((visibility("hidden")))
@interface UIDictationController : NSObject {
@private
	UIDictationView *_view;	// 4 = 0x4
	NSArray *_availableLanguages;	// 8 = 0x8
	NSTimer *_recordingLimitTimer;	// 12 = 0xc
	void *_callCenterFrameworkFileHandle;	// 16 = 0x10
	id _callCenter;	// 20 = 0x14
	void *_facetimeCallFrameworkFileHandle;	// 24 = 0x18
	id _facetimeCallManager;	// 28 = 0x1c
	BOOL _disabledDueToTelephonyActivity;	// 32 = 0x20
}
@property(readonly, assign) BOOL disabledDueToTelephonyActivity;	// G=0x303bcfa9; converted property
@property(assign) int state;	// G=0x303bccc9; S=0x303bcacd; converted property
@property(retain, nonatomic) UIDictationView *view;	// G=0x303bd6b9; S=0x303bd6c9; @synthesize=_view
+ (id)activeInstance;	// 0x303ba2cd
+ (void)applicationDidBecomeActive;	// 0x303baf45
+ (void)applicationDidChangeStatusBarFrame;	// 0x303bafdd
+ (void)applicationWillResignActive;	// 0x303baf7d
+ (id)bestInterpretationForDictationResult:(id)dictationResult;	// 0x303bbc61
+ (void)disableGestureHandler;	// 0x303ba9c5
+ (void)enableGestureHandlerIfNecessary;	// 0x303babe5
+ (BOOL)fetchCurrentInputModeSupportsDictation;	// 0x303ba469
+ (id)inputModeNameForDictation;	// 0x303ba45d
+ (BOOL)isRunning;	// 0x303ba445
+ (void)keyboardDidSetDelegate;	// 0x303baed5
+ (void)keyboardDidSetInputMode;	// 0x303bae9d
+ (void)keyboardDidUpdateOnScreenStatus;	// 0x303baf0d
+ (void)logCorrectionStatistics;	// 0x303ba5e9
+ (void)preheatIfNecessary;	// 0x303ba365
+ (id)prunedDictationResultForSingleLineEditor:(id)singleLineEditor;	// 0x303bbdd1
+ (id)serializedDictationPhrases:(id)phrases;	// 0x303bbc41
+ (id)serializedDictationPhrases:(id)phrases fromKeyboard:(BOOL)keyboard;	// 0x303bb1b5
+ (id)serializedInterpretationFromTokens:(id)tokens;	// 0x303bb069
+ (id)sharedInstance;	// 0x303ba2dd
+ (BOOL)shouldEnableGestureHandler;	// 0x303bad69
+ (void)willEndEditingInTextView:(id)textView;	// 0x303bae3d
- (id)init;	// 0x303b9f5d
- (id)_connection;	// 0x303ba355
- (id)assistantCompatibleLanguageCodeForLanguage:(id)language region:(id)region;	// 0x303bc091
- (float)audioLevel;	// 0x303bc279
- (void)cancelDictation;	// 0x303bd2a9
- (void)cancelRecordingLimitTimer;	// 0x303bcde9
- (void)dealloc;	// 0x303bccd9
- (void)dictationConnection:(id)connection didRecognizeSpeechPhrases:(id)phrases correctionIdentifier:(id)identifier;	// 0x303bd40d
- (void)dictationConnection:(id)connection speechRecognitionDidFail:(id)speechRecognition;	// 0x303bd651
- (void)dictationConnection:(id)connection speechRecordingDidFail:(id)speechRecording;	// 0x303bd5e9
- (void)dictationConnectionSpeechRecordingDidBegin:(id)dictationConnectionSpeechRecording;	// 0x303bd599
- (void)dictationConnectionSpeechRecordingDidCancel:(id)dictationConnectionSpeechRecording;	// 0x303bd5c5
- (void)dictationConnectionSpeechRecordingDidEnd:(id)dictationConnectionSpeechRecording;	// 0x303bd5a1
- (void)dictationConnectionSpeechRecordingWillBegin:(id)dictationConnectionSpeechRecording;	// 0x303bd575
- (BOOL)dictationEnabled;	// 0x303bceb5
- (void)disableAutorotation;	// 0x303baa89
// converted property getter: - (BOOL)disabledDueToTelephonyActivity;	// 0x303bcfa9
- (id)fieldIdentifierInputDelegate:(id)delegate;	// 0x303bc301
- (id)inputModeThatInvokedDictation;	// 0x303bc205
- (float)normalizedAudioLevel;	// 0x303bc295
- (id)postfixTextForInputDelegate:(id)inputDelegate;	// 0x303bc559
- (id)prefixTextForInputDelegate:(id)inputDelegate;	// 0x303bc3f9
- (void)proximityStateChanged:(id)changed;	// 0x303baac1
- (void)reenableAutorotation;	// 0x303baa1d
- (id)selectedTextForInputDelegate:(id)inputDelegate;	// 0x303bc6b9
// converted property setter: - (void)setState:(int)state;	// 0x303bcacd
// declared property setter: - (void)setView:(id)view;	// 0x303bd6c9
- (void)showDialogForError:(id)error;	// 0x303bd3a9
- (void)startConnection;	// 0x303bc7d1
- (void)startDictation;	// 0x303bcfb9
- (void)startRecordingLimitTimer;	// 0x303bce31
// converted property getter: - (int)state;	// 0x303bccc9
- (void)stopDictation;	// 0x303bd329
- (BOOL)supportsInputMode:(id)mode error:(id *)error;	// 0x303bc0d1
// declared property getter: - (id)view;	// 0x303bd6b9
@end

