/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPViewController.h"


@interface MPAbstractAlternateTracksViewController : MPViewController {
	unsigned _selectedTracks[2];	// 224 = 0xe0
	unsigned _previousTracks[2];	// 232 = 0xe8
}
- (id)init;	// 0x341bdcd9
- (void)_alternateTypesChangedNotification:(id)notification;	// 0x341bddc9
- (void)addLoadingUI;	// 0x341bded5
- (id)alternateTracks;	// 0x341be025
- (id)arrayForGroup:(int)group;	// 0x341be05d
- (void)dealloc;	// 0x341bdd59
- (unsigned)indexForGroup:(int)group;	// 0x341be0a5
- (void)reloadData;	// 0x341bddd9
- (void)removeLoadingUI;	// 0x341bdf05
- (void)saveChanges;	// 0x341bdf41
- (unsigned)typeForGroup:(int)group;	// 0x341be0f9
@end

