/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPViewController.h"


@interface MPAbstractAlternateTracksViewController : MPViewController {
	unsigned _selectedTracks[2];	// 196 = 0xc4
	unsigned _previousTracks[2];	// 204 = 0xcc
}
- (id)init;	// 0x34e4545d
- (void)_alternateTypesChangedNotification:(id)notification;	// 0x34e4554d
- (void)addLoadingUI;	// 0x34e4564d
- (id)alternateTracks;	// 0x34e4579d
- (id)arrayForGroup:(int)group;	// 0x34e457d5
- (void)dealloc;	// 0x34e454dd
- (unsigned)indexForGroup:(int)group;	// 0x34e4581d
- (void)reloadData;	// 0x34e4555d
- (void)removeLoadingUI;	// 0x34e4567d
- (void)saveChanges;	// 0x34e456b9
- (id)titleForTrack:(id)track;	// 0x34e4586d
- (unsigned)typeForGroup:(int)group;	// 0x34e45975
@end

