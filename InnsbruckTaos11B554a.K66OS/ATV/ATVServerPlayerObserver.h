/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVServerPlayerObserver : XXUnknownSuperclass {
	NSTimer *_updateTimer;	// 4 = 0x4
	NSMutableDictionary *_notificationHistory;	// 8 = 0x8
	int _previousInterstitialIndex;	// 12 = 0xc
}
- (id)init;	// 0x219629
- (void).cxx_destruct;	// 0x219e0d
- (void)_chaptersChanged:(id)changed;	// 0x219c01
- (void)_clearUpdateTimer;	// 0x219c31
- (void)_iTunesPlaybackMetadataChanged:(id)changed;	// 0x219b11
- (void)_nowPlayingUpdated:(id)updated;	// 0x219a81
- (void)_playerStateChanged:(id)changed;	// 0x2199e1
- (void)_playerTimeChanged:(id)changed;	// 0x219949
- (void)_playerTimeSkipped:(id)skipped;	// 0x219ab1
- (void)_playerVolumeChanged:(id)changed;	// 0x219ae1
- (void)_queueChanged:(id)changed;	// 0x219b41
- (void)_selectedAudioOptionChanged:(id)changed;	// 0x219b71
- (void)_selectedSubtitleOptionChanged:(id)changed;	// 0x219bd1
- (void)_subtitleOptionsChanged:(id)changed;	// 0x219ba1
- (void)_updateClients;	// 0x219c6d
- (void)_updateClientsWithDelay:(double)delay forNotification:(id)notification;	// 0x219cf9
- (void)_updateTimerFired:(id)fired;	// 0x219dfd
- (void)dealloc;	// 0x2198dd
@end

