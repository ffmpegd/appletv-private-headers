/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVAudioSelectionDelegate.h"
#import "ATVSubtitleProvider.h"
#import "BRMediaAssetDerivesMediaURL.h"
#import "ATVVideoAsset.h"

@class BRTimer, ATVSubtitleOption, NSDictionary, NSNumber, NSMutableDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface ATVSedonaMediaAsset : ATVVideoAsset <ATVSubtitleProvider, ATVAudioSelectionDelegate, BRMediaAssetDerivesMediaURL> {
	BOOL _playlistURLDetermined;	// 12 = 0xc
	BOOL _hasBeenPlayed;	// 13 = 0xd
	BOOL _isPaused;	// 14 = 0xe
	BOOL _isStalled;	// 15 = 0xf
	double _lastNotedPlaybackPosition;	// 16 = 0x10
	BRTimer *_bufferingTimer;	// 24 = 0x18
	BOOL _endSent;	// 28 = 0x1c
	BOOL _startSent;	// 29 = 0x1d
	id _mediaOpenCompletionHandler;	// 32 = 0x20
	NSDictionary *_subtitleOptionsByAudioTrackIndex;	// 36 = 0x24
	NSArray *_subtitleOptions;	// 40 = 0x28
	ATVSubtitleOption *_subtitleOptionBeingLoaded;	// 44 = 0x2c
	ATVSubtitleOption *_defaultSubtitleOption;	// 48 = 0x30
	NSMutableDictionary *_subtitleSampleSets;	// 52 = 0x34
	id _subtitleCompletionHandler;	// 56 = 0x38
	NSNumber *_durationFromNetflixLibrary;	// 60 = 0x3c
	double _timeLastQOSReportSent;	// 64 = 0x40
	double _timeOfLastBookmarkUpdate;	// 72 = 0x48
}
@property(readonly, retain) ATVSubtitleOption *defaultSubtitleOption;	// G=0x2258f9; converted property
@property(readonly, retain) NSArray *subtitleOptions;	// G=0x2255f1; converted property
+ (BOOL)shouldUseSedonaMediaAsset:(id)asset;	// 0x224a61
- (id)initWithDictionary:(id)dictionary;	// 0x224dad
- (id)initWithFeedElement:(id)feedElement;	// 0x224acd
- (id)_ISOLanguageCodeFromBCP47:(id)bcp47;	// 0x226d19
- (void)_configureSubtitlesForAudioTrackIndex:(id)audioTrackIndex;	// 0x2267f9
- (void)_mediaOpenFinished:(id)finished;	// 0x226261
- (id)_parseItalics:(id)italics;	// 0x226d6d
- (id)_parseSubtitleSamples:(id)samples;	// 0x227391
- (void)_playbackEnded:(id)ended;	// 0x225d69
- (void)_playbackProgressChanged:(id)changed;	// 0x225ba9
- (void)_playerEnd:(double)end reason:(id)reason;	// 0x225a61
- (void)_playerStart:(double)start;	// 0x225959
- (void)_playerStateChanged:(id)changed;	// 0x225dc1
- (void)_playerWillStop:(id)_player;	// 0x2260cd
- (void)_reportQualityOfService:(id)service;	// 0x227049
- (void)_setDefaultSubtitleOption:(id)option;	// 0x2278f1
- (void)_stallDuringPlayback:(id)playback;	// 0x22605d
- (void)_streamSwitched:(id)switched;	// 0x2260fd
- (void)_subtitleLoadDidFail:(id)_subtitleLoad;	// 0x226205
- (void)_subtitleLoadDidSucceed:(id)_subtitleLoad;	// 0x22612d
- (void)_timeSkipped:(id)skipped;	// 0x225cd1
- (void)_vendorOutOfDateSoftware:(id)dateSoftware;	// 0x226cb1
- (void)audioDidSelectTrackAtIndex:(id)audio;	// 0x225909
- (void)dealloc;	// 0x224df1
// converted property getter: - (id)defaultSubtitleOption;	// 0x2258f9
- (BOOL)forceHDCPProtection;	// 0x225001
- (void)loadSubtitleSamplesForOption:(id)option completionHandler:(id)handler;	// 0x225601
- (void)resolveMediaURL:(id)url;	// 0x225005
- (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x224fe1
- (void)setBookmarkTimeInSeconds:(unsigned)seconds;	// 0x224fc5
// converted property getter: - (id)subtitleOptions;	// 0x2255f1
- (id)subtitleSamplesForOption:(id)option;	// 0x2258b5
@end

