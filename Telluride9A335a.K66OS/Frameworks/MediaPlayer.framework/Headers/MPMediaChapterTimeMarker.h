/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPTimeMarker.h"

@class NSArray;

@interface MPMediaChapterTimeMarker : MPTimeMarker {
@private
	unsigned _chapterIndex;	// 40 = 0x28
	NSArray *_chapters;	// 44 = 0x2c
	BOOL _hasArtworkAtPlaybackTime;	// 48 = 0x30
}
@property(assign, nonatomic) unsigned chapterIndex;	// G=0x3017c459; S=0x3017c469; @synthesize=_chapterIndex
@property(retain, nonatomic) NSArray *chapters;	// G=0x3017c479; S=0x3017c489; @synthesize=_chapters
@property(assign, nonatomic) BOOL hasArtworkAtPlaybackTime;	// G=0x3017c4ad; S=0x3017c4bd; @synthesize=_hasArtworkAtPlaybackTime
// declared property getter: - (unsigned)chapterIndex;	// 0x3017c459
// declared property getter: - (id)chapters;	// 0x3017c479
- (void)dealloc;	// 0x3017c40d
// declared property getter: - (BOOL)hasArtworkAtPlaybackTime;	// 0x3017c4ad
// declared property setter: - (void)setChapterIndex:(unsigned)index;	// 0x3017c469
// declared property setter: - (void)setChapters:(id)chapters;	// 0x3017c489
// declared property setter: - (void)setHasArtworkAtPlaybackTime:(BOOL)playbackTime;	// 0x3017c4bd
@end
