/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library
#import "VoiceServices-Structs.h"

@class NSString;
@protocol VSSpeechSynthesizerDelegate;

@interface VSSpeechSynthesizer : NSObject {
@private
	void *_speechJob;	// 4 = 0x4
	void *_keepAlive;	// 8 = 0x8
	id<VSSpeechSynthesizerDelegate> _delegate;	// 12 = 0xc
	NSString *_voice;	// 16 = 0x10
	int _footprint;	// 20 = 0x14
	float _rate;	// 24 = 0x18
	float _pitch;	// 28 = 0x1c
	float _volume;	// 32 = 0x20
	struct {
		unsigned delegateStart : 1;
		unsigned delegateFinish : 1;
		unsigned delegateFinishWithPhonemesSpoken : 1;
		unsigned delegatePause : 1;
		unsigned delegateContinue : 1;
		unsigned delegateWillSpeak : 1;
		unsigned willUseInput : 1;
	} _synthesizerFlags;	// 36 = 0x24
}
@property(assign) int footprint;	// G=0x342d54fd; S=0x342d54ed; converted property
@property(readonly, assign) float pitch;	// G=0x342d54cd; converted property
@property(readonly, assign) float rate;	// G=0x342d54ad; converted property
@property(retain) NSString *voice;	// G=0x342d5899; S=0x342d58fd; converted property
@property(readonly, assign) float volume;	// G=0x342d54dd; converted property
+ (void)_localeDidChange;	// 0x342d5575
+ (id)availableLanguageCodes;	// 0x342d55ad
+ (id)availableVoices;	// 0x342d55f5
+ (id)availableVoicesForLanguageCode:(id)languageCode;	// 0x342d55c9
+ (BOOL)isSystemSpeaking;	// 0x342d55a1
- (id)init;	// 0x342d550d
- (id)initForInputFeedback;	// 0x342d6231
- (void)_handleSpeech:(VSSpeechRef)speech completed:(BOOL)completed phonemesSpoken:(CFStringRef)spoken withError:(id)error;	// 0x342d56a9
- (void)_handleSpeech:(VSSpeechRef)speech willSpeakMarkType:(int)type inRange:(XXStruct_K5nmsA)range;	// 0x342d564d
- (void)_handleSpeechContinued:(VSSpeechRef)continued;	// 0x342d5751
- (void)_handleSpeechPaused:(VSSpeechRef)paused;	// 0x342d57a1
- (void)_handleSpeechStarted:(VSSpeechRef)started;	// 0x342d57f1
- (id)continueSpeaking;	// 0x342d5b49
- (void)dealloc;	// 0x342d61a9
// converted property getter: - (int)footprint;	// 0x342d54fd
- (BOOL)isSpeaking;	// 0x342d5b21
- (float)maximumRate;	// 0x342d54c5
- (float)minimumRate;	// 0x342d54bd
- (id)pauseSpeakingAtNextBoundary:(int)nextBoundary;	// 0x342d5c2d
- (id)pauseSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously;	// 0x342d5bb5
// converted property getter: - (float)pitch;	// 0x342d54cd
// converted property getter: - (float)rate;	// 0x342d54ad
- (void)setDelegate:(id)delegate;	// 0x342d6065
// converted property setter: - (void)setFootprint:(int)footprint;	// 0x342d54ed
- (void)setMaintainPersistentConnection:(BOOL)connection;	// 0x342d5841
- (id)setPitch:(float)pitch;	// 0x342d5a05
- (id)setRate:(float)rate;	// 0x342d5a79
// converted property setter: - (void)setVoice:(id)voice;	// 0x342d58fd
- (id)setVolume:(float)volume;	// 0x342d5945
- (id)speechString;	// 0x342d5aed
- (id)startSpeakingAttributedString:(id)string;	// 0x342d5d19
- (id)startSpeakingAttributedString:(id)string toURL:(id)url;	// 0x342d5cf5
- (id)startSpeakingAttributedString:(id)string toURL:(id)url withLanguageCode:(id)languageCode;	// 0x342d5ccd
- (id)startSpeakingString:(id)string;	// 0x342d6045
- (id)startSpeakingString:(id)string attributedString:(id)string2 toURL:(id)url withLanguageCode:(id)languageCode;	// 0x342d5d51
- (id)startSpeakingString:(id)string toURL:(id)url;	// 0x342d6021
- (id)startSpeakingString:(id)string toURL:(id)url withLanguageCode:(id)languageCode;	// 0x342d5d2d
- (id)startSpeakingString:(id)string withLanguageCode:(id)languageCode;	// 0x342d6001
- (id)stopSpeakingAtNextBoundary:(int)nextBoundary;	// 0x342d5cb9
- (id)stopSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously;	// 0x342d5c41
// converted property getter: - (id)voice;	// 0x342d5899
// converted property getter: - (float)volume;	// 0x342d54dd
@end

