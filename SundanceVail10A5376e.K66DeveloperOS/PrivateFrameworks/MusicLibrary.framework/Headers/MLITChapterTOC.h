/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "MLChapterTOC.h"


@interface MLITChapterTOC : MLChapterTOC {
	unsigned _totalTimeInMS;	// 4 = 0x4
	ChapterData *_chapterDataRef;	// 8 = 0x8
	unsigned *_picCookieIndexMap;	// 12 = 0xc
	unsigned *_urlCookieIndexMap;	// 16 = 0x10
	unsigned *_nameCookieIndexMap;	// 20 = 0x14
}
@property(readonly, assign) ChapterData *chapterDataRef;	// G=0x3486235d; converted property
@property(readonly, assign) unsigned totalTimeInMS;	// G=0x34862709; converted property
+ (unsigned **)_chapterDataCookieIndexMapForProperty:(int)property ofChapterTOC:(id)chapterTOC;	// 0x34862411
+ (void)enumerateArtworkCacheIDsInFlattenedChapterData:(id)flattenedChapterData usingBlock:(id)block;	// 0x34862ce1
+ (id)imageCacheKeyForTrackWithPID:(long long)pid startTimeMS:(unsigned)ms;	// 0x34862c81
- (id)initWithChapterDataRef:(ChapterData *)chapterDataRef totalTimeInMS:(unsigned)ms;	// 0x34862235
- (unsigned *)_cachedCookieIndexMapForProperty:(int)property createIfNecessary:(BOOL)necessary;	// 0x34862501
- (id)bestImageDataForSize:(CGSize)size chapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x34862c51
// converted property getter: - (ChapterData *)chapterDataRef;	// 0x3486235d
- (unsigned)chapterIndexForGroupIndex:(unsigned)groupIndex groupingProperty:(int)property;	// 0x34862699
- (unsigned)countOfChapters;	// 0x348623f5
- (unsigned)countOfGroupsForProperty:(int)property;	// 0x34862635
- (void)dealloc;	// 0x3486236d
- (unsigned)durationInMSOfGroupAtIndex:(unsigned)index groupingProperty:(int)property;	// 0x34862719
- (id)getImageWithArtworkFormatID:(unsigned)artworkFormatID size:(CGSize)size chapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x34862b95
- (unsigned)groupIndexAtTimeLocationInMS:(unsigned)ms groupingProperty:(int)property;	// 0x348627bd
- (unsigned)groupIndexForChapterIndex:(unsigned)chapterIndex groupingProperty:(int)property;	// 0x348626c9
- (id)imageDataForArtworkFormatID:(unsigned)artworkFormatID chapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x34862c19
- (id)imageDataForArtworkFormatID:(unsigned)artworkFormatID size:(CGSize)size artworkChapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x34862af5
- (unsigned)timeLocationInMSOfChapterAtIndex:(unsigned)index;	// 0x34862821
- (unsigned)timeLocationInMSOfGroupAtIndex:(unsigned)index groupingProperty:(int)property;	// 0x348627f1
- (id)titlePropertyOfChapterAtIndex:(unsigned)index;	// 0x3486283d
// converted property getter: - (unsigned)totalTimeInMS;	// 0x34862709
- (id)urlPropertyOfChapterAtIndex:(unsigned)index;	// 0x348629d5
- (id)urlTitlePropertyOfChapterAtIndex:(unsigned)index;	// 0x348628f9
- (id)urlTitleTrimmingCharacterSet;	// 0x348628dd
@end
