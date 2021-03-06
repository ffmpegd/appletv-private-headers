/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSubtitleProvider.h"
#import "AppleTV-Structs.h"
#import "BRMediaAssetDerivesMediaURL.h"
#import "ATVVideoAsset.h"

@class NSMutableDictionary, ATVSubtitleOption, NSNumber, BRTimer, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVSedonaMediaAsset : ATVVideoAsset <ATVSubtitleProvider, BRMediaAssetDerivesMediaURL> {
@private
	BOOL _playlistURLDetermined;	// 52 = 0x34
	BOOL _hasBeenPlayed;	// 53 = 0x35
	BOOL _isPaused;	// 54 = 0x36
	BOOL _isStalled;	// 55 = 0x37
	double _lastNotedPlaybackPosition;	// 56 = 0x38
	BRTimer *_bufferingTimer;	// 64 = 0x40
	BOOL _endSent;	// 68 = 0x44
	BOOL _startSent;	// 69 = 0x45
	BOOL _mediaWasOpened;	// 70 = 0x46
	BOOL _mediaWasClosed;	// 71 = 0x47
	NSDictionary *_mediaOpenResults;	// 72 = 0x48
	dispatch_semaphore_s *_mediaOpenSemaphore;	// 76 = 0x4c
	NSArray *_subtitleOptions;	// 80 = 0x50
	ATVSubtitleOption *_subtitleOptionBeingLoaded;	// 84 = 0x54
	ATVSubtitleOption *_defaultSubtitleOption;	// 88 = 0x58
	NSMutableDictionary *_subtitleSampleSets;	// 92 = 0x5c
	id _completionHandler;	// 96 = 0x60
	NSNumber *_durationFromNetflixLibrary;	// 100 = 0x64
	double _timeLastQOSReportSent;	// 104 = 0x68
	double _timeOfLastBookmarkUpdate;	// 112 = 0x70
}
@property(readonly, retain) ATVSubtitleOption *defaultSubtitleOption;	// G=0x331ecb49; converted property
@property(readonly, retain) NSArray *subtitleOptions;	// G=0x331ec82d; converted property
+ (BOOL)shouldUseSedonaMediaAsset:(id)asset;	// 0x331eb10d
- (id)initWithDictionary:(id)dictionary;	// 0x331eb441
- (id)initWithFeedElement:(id)feedElement;	// 0x331eb17d
- (id)_ISOLanguageCodeFromBCP47:(id)bcp47;	// 0x331ed6ed
- (void)_mediaCloseFinished:(id)finished;	// 0x331ed62d
- (void)_mediaOpenFinished:(id)finished;	// 0x331ed471
- (id)_parseItalics:(id)italics;	// 0x331ed74d
- (id)_parseSubtitleSamples:(id)samples;	// 0x331eddb1
- (void)_playbackEnded:(id)ended;	// 0x331ecf45
- (void)_playbackProgressChanged:(id)changed;	// 0x331ece1d
- (void)_playerEnd:(double)end reason:(id)reason;	// 0x331ecc65
- (void)_playerStart:(double)start;	// 0x331ecb59
- (void)_playerStateChanged:(id)changed;	// 0x331ecf9d
- (void)_playerWillStop:(id)_player;	// 0x331ed2d9
- (void)_reportQualityOfService:(id)service;	// 0x331edac5
- (void)_setDefaultSubtitleOption:(id)option;	// 0x331ee30d
- (void)_stallDuringPlayback:(id)playback;	// 0x331ed265
- (void)_streamSwitched:(id)switched;	// 0x331ed309
- (void)_subtitleLoadDidFail:(id)_subtitleLoad;	// 0x331ed415
- (void)_subtitleLoadDidSucceed:(id)_subtitleLoad;	// 0x331ed339
- (void)_vendorOutOfDateSoftware:(id)dateSoftware;	// 0x331ed689
- (void)dealloc;	// 0x331eb481
// converted property getter: - (id)defaultSubtitleOption;	// 0x331ecb49
- (BOOL)forceHDCPProtection;	// 0x331eb681
- (void)loadSubtitleSamplesForOption:(id)option completionHandler:(id)handler;	// 0x331ec83d
- (id)resolveMediaURL;	// 0x331eb685
- (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x331eb661
- (void)setBookmarkTimeInSeconds:(unsigned)seconds;	// 0x331eb645
// converted property getter: - (id)subtitleOptions;	// 0x331ec82d
- (id)subtitleSamplesForOption:(id)option;	// 0x331ecb05
@end

