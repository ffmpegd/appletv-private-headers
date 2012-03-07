/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSThread, NSMutableArray, NSDictionary, NSString;
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
@property(readonly, assign) BOOL isSpeaking;	// G=0x34199f69; converted property
@property(assign, nonatomic) BOOL speechEnabled;	// G=0x3419a175; S=0x34199b7d; @synthesize=_speechEnabled
@property(assign, nonatomic) float speechRate;	// G=0x34199fd9; S=0x3419a089; @dynamic
@property(copy, nonatomic) NSString *systemLanguage;	// G=0x3419a185; S=0x3419a195; @synthesize=_systemLanguage
+ (URegularExpression *)createRegularExpressionFromString:(id)string;	// 0x341990f5
+ (id)matchedRangesForString:(id)string withRegularExpression:(URegularExpression *)regularExpression;	// 0x3419915d
- (id)init;	// 0x34198d51
- (void)_clearSpeechQueue;	// 0x34199cf9
- (void)_continueSpeaking;	// 0x34199e55
- (void)_dispatchSpeechAction:(id)action;	// 0x34199bad
- (void)_initialize;	// 0x34198f95
- (void)_isSpeaking:(id)speaking;	// 0x34199f15
- (void)_pauseSpeaking;	// 0x34199df5
- (id)_preprocessString:(id)string language:(id)language;	// 0x34199981
- (id)_processDurationStrings:(id)strings;	// 0x341995c1
- (id)_processPronunciationChanges:(id)changes language:(id)language;	// 0x34199815
- (void)_setSpeechRate:(id)rate;	// 0x3419a01d
- (void)_speechJobFinished:(BOOL)finished;	// 0x3419927d
- (void)_startNextSpeechJob;	// 0x341993f5
- (void)_stopSpeaking;	// 0x34199eb5
- (void)clearSpeechQueue;	// 0x34199d19
- (void)continueSpeaking;	// 0x34199e75
- (void)dealloc;	// 0x34198eb5
- (void)dispatchSpeechAction:(id)action;	// 0x34199d59
// converted property getter: - (BOOL)isSpeaking;	// 0x34199f69
- (void)pauseSpeaking;	// 0x34199e15
- (void)setMaintainConnection:(BOOL)connection;	// 0x3419925d
- (void)setPitch:(id)pitch;	// 0x3419933d
// declared property setter: - (void)setSpeechEnabled:(BOOL)enabled;	// 0x34199b7d
// declared property setter: - (void)setSpeechRate:(float)rate;	// 0x3419a089
// declared property setter: - (void)setSystemLanguage:(id)language;	// 0x3419a195
// declared property getter: - (BOOL)speechEnabled;	// 0x3419a175
// declared property getter: - (float)speechRate;	// 0x34199fd9
- (void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking withError:(id)error;	// 0x3419a145
- (void)stopSpeaking;	// 0x34199ed5
// declared property getter: - (id)systemLanguage;	// 0x3419a185
@end

