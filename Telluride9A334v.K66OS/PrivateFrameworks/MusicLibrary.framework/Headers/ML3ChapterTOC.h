/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "MLITChapterTOC.h"

@class ML3Track;

__attribute__((visibility("hidden")))
@interface ML3ChapterTOC : MLITChapterTOC {
@private
	ML3Track *_track;	// 24 = 0x18
}
- (id)initWithChapterDataRef:(ChapterData *)chapterDataRef track:(id)track;	// 0x3380901d
- (id)artworkCacheIDForChapterIndex:(unsigned)chapterIndex;	// 0x33809201
- (id)artworkCacheIDForTimeInMS:(unsigned)ms;	// 0x338090f5
- (void)dealloc;	// 0x338090a9
- (id)imageDataForArtworkFormatID:(unsigned)artworkFormatID size:(CGSize)size artworkChapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x3380924d
@end

