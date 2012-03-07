/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSDictionary, NSString, NSThread;
@protocol VSSpeechHiddenProtocol;

__attribute__((visibility("hidden")))
@interface BRVoiceOverSpeechManager : NSObject {
@private
	NSMutableArray *_speechQueue;	// 4 = 0x4
	NSObject<VSSpeechHiddenProtocol> *_synthesizer;	// 8 = 0x8
	NSThread *_runThread;	// 12 = 0xc
	NSDictionary *_pronunciationGuide;	// 16 = 0x10
	NSString *_systemLanguage;	// 20 = 0x14
	BOOL _runLoopEnabled;	// 24 = 0x18
	BOOL _didInitialize;	// 25 = 0x19
	BOOL _isSpeaking;	// 26 = 0x1a
	BOOL _speechEnabled;	// 27 = 0x1b
}
@property(readonly, assign) BOOL isSpeaking;	// G=0x35dab849; converted property
@property(assign, nonatomic) BOOL speechEnabled;	// G=0x35daba55; S=0x35dab45d; @synthesize=_speechEnabled
@property(assign, nonatomic) float speechRate;	// G=0x35dab8b9; S=0x35dab969; @dynamic
@property(copy, nonatomic) NSString *systemLanguage;	// G=0x35daba65; S=0x35daba75; @synthesize=_systemLanguage
+ (URegularExpression *)createRegularExpressionFromString:(id)string;	// 0x35daa9d5
+ (id)matchedRangesForString:(id)string withRegularExpression:(URegularExpression *)regularExpression;	// 0x35daaa3d
- (id)init;	// 0x35daa631
- (void)_clearSpeechQueue;	// 0x35dab5d9
- (void)_continueSpeaking;	// 0x35dab735
- (void)_dispatchSpeechAction:(id)action;	// 0x35dab48d
- (void)_initialize;	// 0x35daa875
- (void)_isSpeaking:(id)speaking;	// 0x35dab7f5
- (void)_pauseSpeaking;	// 0x35dab6d5
- (id)_preprocessString:(id)string language:(id)language;	// 0x35dab261
- (id)_processDurationStrings:(id)strings;	// 0x35daaea1
- (id)_processPronunciationChanges:(id)changes language:(id)language;	// 0x35dab0f5
- (void)_setSpeechRate:(id)rate;	// 0x35dab8fd
- (void)_speechJobFinished:(BOOL)finished;	// 0x35daab5d
- (void)_startNextSpeechJob;	// 0x35daacd5
- (void)_stopSpeaking;	// 0x35dab795
- (void)clearSpeechQueue;	// 0x35dab5f9
- (void)continueSpeaking;	// 0x35dab755
- (void)dealloc;	// 0x35daa795
- (void)dispatchSpeechAction:(id)action;	// 0x35dab639
// converted property getter: - (BOOL)isSpeaking;	// 0x35dab849
- (void)pauseSpeaking;	// 0x35dab6f5
- (void)setMaintainConnection:(BOOL)connection;	// 0x35daab3d
- (void)setPitch:(id)pitch;	// 0x35daac1d
// declared property setter: - (void)setSpeechEnabled:(BOOL)enabled;	// 0x35dab45d
// declared property setter: - (void)setSpeechRate:(float)rate;	// 0x35dab969
// declared property setter: - (void)setSystemLanguage:(id)language;	// 0x35daba75
// declared property getter: - (BOOL)speechEnabled;	// 0x35daba55
// declared property getter: - (float)speechRate;	// 0x35dab8b9
- (void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking withError:(id)error;	// 0x35daba25
- (void)stopSpeaking;	// 0x35dab7b5
// declared property getter: - (id)systemLanguage;	// 0x35daba65
@end

