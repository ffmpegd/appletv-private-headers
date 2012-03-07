/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library
#import "VoiceServices-Structs.h"

@class NSString, VSSpeechSynthesizer, NSArray, VSRecognitionAction;
@protocol VSRecognitionSessionDelegate;

@interface VSRecognitionSession : NSObject {
	NSString *_modelIdentifier;	// 4 = 0x4
	void *_keepAlive;	// 8 = 0x8
	id<VSRecognitionSessionDelegate> _delegate;	// 12 = 0xc
	VSRecognitionAction *_currentAction;	// 16 = 0x10
	NSArray *_topLevelKeywords;	// 20 = 0x14
	id _handlingThread;	// 24 = 0x18
	VSSpeechSynthesizer *_synthesizer;	// 28 = 0x1c
	NSString *_languageID;	// 32 = 0x20
	NSString *_debugDumpPath;	// 36 = 0x24
	NSString *_audioInputPath;	// 40 = 0x28
	double _levelInterval;	// 44 = 0x2c
	unsigned _keywordPhase;	// 52 = 0x34
	struct {
		unsigned delegateWillBegin : 1;
		unsigned delegateBegin : 1;
		unsigned delegateOpenURL : 1;
		unsigned delegateFinishedSpeaking : 1;
		unsigned delegateComplete : 1;
		unsigned debugDumpEnabled : 1;
		unsigned preferredEngine : 2;
		unsigned performHandlerActions : 1;
		unsigned allowSensitiveActions : 1;
		unsigned bluetoothAllowed : 1;
		unsigned resetNextAction : 1;
		unsigned isSpeaking : 1;
		unsigned actionBegan : 1;
		unsigned actionBeginning : 1;
		unsigned actionBeginDeferred : 1;
		unsigned invalid : 1;
		unsigned observeKeywordChange : 1;
	} _sessionFlags;	// 56 = 0x38
}
@property(readonly, retain) NSString *debugDumpPath;	// G=0x328e019d; converted property
@property(assign) BOOL sensitiveActionsEnabled;	// G=0x328e0185; S=0x328e0165; converted property
- (id)init;	// 0x328e1071
- (id)initWithModelIdentifier:(id)modelIdentifier;	// 0x328e1c41
- (void)_actionCompleted:(id)completed nextAction:(id)action error:(id)error;	// 0x328e0449
- (BOOL)_actionStarted:(id)started;	// 0x328e0675
- (id)_beginSpeakingAttributedString:(id)string;	// 0x328e0d29
- (id)_beginSpeakingString:(id)string attributedString:(id)string2;	// 0x328e10b9
- (CFDictionaryRef)_createKeywordIndex;	// 0x328e1601
- (id)_createPhaseSortedKeywordsFromArray:(id)array;	// 0x328e13b5
- (id)_currentRecognizeAction;	// 0x328e0995
- (void)_init;	// 0x328e101d
- (void)_keywordIndexChanged;	// 0x328e0c45
- (id)_keywordsForModelIdentifier:(id)modelIdentifier;	// 0x328e126d
- (void)_notifyDelegateActionStarted;	// 0x328e070d
- (void)_notifyDelegateFinishedSpeakingWithError:(id)error;	// 0x328e0d75
- (id)_notifyDelegateOpenURL:(id)url;	// 0x328e0749
- (id)_recognitionResultHandlingThread;	// 0x328e09f5
- (void)_setAction:(id)action;	// 0x328e078d
- (id)_topLevelKeywords;	// 0x328e12fd
- (id)beginNextAction;	// 0x328e18b5
- (id)beginSpeakingFeedbackString;	// 0x328e11a9
- (id)beginSpeakingString:(id)string;	// 0x328e0cdd
- (id)cancel;	// 0x328e0435
- (id)cancelMaintainingKeepAlive:(BOOL)alive;	// 0x328e16c5
- (void)dealloc;	// 0x328e1af5
// converted property getter: - (id)debugDumpPath;	// 0x328e019d
- (id)displayResultString;	// 0x328e0ac5
- (id)displayStatusString;	// 0x328e0ae5
- (BOOL)hasDeferredAction;	// 0x328e011d
- (float)inputLevel;	// 0x328e0b5d
- (BOOL)isActivelyRecognizing;	// 0x328e0329
- (BOOL)isBusy;	// 0x328e0131
- (BOOL)isFinished;	// 0x328e00e9
- (BOOL)isRecognizing;	// 0x328e02f1
- (BOOL)isValid;	// 0x328e0101
- (id)keywordAtIndex:(int)index;	// 0x328e0bdd
- (int)keywordCount;	// 0x328e0c09
- (BOOL)nextActionWillRecognize;	// 0x328e0391
- (BOOL)nextActionWillTerminateSession;	// 0x328e0361
- (void)recognitionResultHandlingThread:(id)thread didHandleResults:(id)results nextAction:(id)action;	// 0x328e0a55
- (id)reset;	// 0x328e17dd
// converted property getter: - (BOOL)sensitiveActionsEnabled;	// 0x328e0185
- (BOOL)setBluetoothInputAllowed:(BOOL)allowed;	// 0x328e03cd
- (BOOL)setDebugDumpEnabled:(BOOL)enabled;	// 0x328e0e05
- (void)setDelegate:(id)delegate;	// 0x328e01cd
- (void)setInputLevelUpdateInterval:(double)interval;	// 0x328e0b05
- (void)setKeywordPhase:(unsigned)phase;	// 0x328e0b99
- (BOOL)setNextRecognitionAudioInputPath:(id)path;	// 0x328e0ed9
- (BOOL)setNextRecognitionRequiresReset:(BOOL)reset;	// 0x328e0f4d
- (void)setPerformRecognitionHandlerActions:(BOOL)actions;	// 0x328e01ad
- (BOOL)setPreferredEngine:(int)engine;	// 0x328e0fb9
// converted property setter: - (void)setSensitiveActionsEnabled:(BOOL)enabled;	// 0x328e0165
- (void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking withError:(id)error;	// 0x328e0db5
- (id)spokenFeedbackAttributedString;	// 0x328e0aa5
- (id)spokenFeedbackString;	// 0x328e0a85
@end

