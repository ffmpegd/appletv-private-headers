/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaEntity.h"

@class NSArray, MPMediaItemArtwork, NSString, NSDate;

@interface MPMediaItem : MPMediaEntity {
}
@property(readonly, assign, nonatomic) BOOL _hasDownloadProgress;	// G=0x35beac7d; 
@property(readonly, assign, nonatomic) BOOL _isDownloadable;	// G=0x35beb091; 
@property(readonly, assign, nonatomic) NSString *albumArtist;	// G=0x35b8ceb9; 
@property(readonly, assign, nonatomic) NSString *albumTitle;	// G=0x35b8cf11; 
@property(readonly, assign, nonatomic) NSString *artist;	// G=0x35b8cf2d; 
@property(readonly, assign, nonatomic) MPMediaItemArtwork *artwork;	// G=0x35b8cf49; 
@property(assign, nonatomic) double bookmarkTime;	// G=0x35b8cf65; S=0x35b8cf99; 
@property(readonly, assign, nonatomic) NSArray *chapters;	// G=0x35b8c715; 
@property(readonly, assign, nonatomic) NSString *composer;	// G=0x35b8cfdd; 
@property(readonly, assign, nonatomic) NSString *effectiveAlbumArtist;	// G=0x35b8ced5; 
@property(readonly, assign, nonatomic) double effectiveStopTime;	// G=0x35b8d145; 
@property(readonly, assign, nonatomic) NSString *genre;	// G=0x35b8cff9; 
@property(assign, nonatomic) BOOL hasBeenPlayed;	// G=0x35b8d519; S=0x35b8d549; 
@property(readonly, assign, nonatomic) BOOL isITunesU;	// G=0x35b8d045; 
@property(readonly, assign, nonatomic) BOOL isRental;	// G=0x35b8d015; 
@property(copy, nonatomic) NSDate *lastPlayedDate;	// G=0x35b8d3b9; S=0x35b8d3d5; 
@property(copy, nonatomic) NSDate *lastSkippedDate;	// G=0x35b8d4e1; S=0x35b8d4fd; 
@property(readonly, assign, nonatomic) int mediaType;	// G=0x35b8d075; 
@property(assign, nonatomic) unsigned playCount;	// G=0x35b8d2c9; S=0x35b8d2fd; 
@property(assign, nonatomic) unsigned playCountSinceSync;	// G=0x35b8d341; S=0x35b8d375; 
@property(readonly, assign, nonatomic) double playbackDuration;	// G=0x35b8d0a9; 
@property(readonly, assign, nonatomic) NSString *podcastTitle;	// G=0x35b8d189; 
@property(assign, nonatomic) unsigned rating;	// G=0x35b8d1a5; S=0x35b8d1d9; 
@property(readonly, assign, nonatomic) NSDate *releaseDate;	// G=0x35b8d21d; 
@property(readonly, assign, nonatomic) BOOL rememberBookmarkTime;	// G=0x35b8d58d; 
@property(assign, nonatomic) unsigned skipCount;	// G=0x35b8d3f1; S=0x35b8d425; 
@property(assign, nonatomic) unsigned skipCountSinceSync;	// G=0x35b8d469; S=0x35b8d49d; 
@property(readonly, assign, nonatomic) double startTime;	// G=0x35b8d0dd; 
@property(readonly, assign, nonatomic) double stopTime;	// G=0x35b8d111; 
@property(readonly, assign, nonatomic) NSString *title;	// G=0x35b8d239; 
@property(readonly, assign, nonatomic) unsigned year;	// G=0x35b8d255; 
+ (void)_createFilterableDictionary;	// 0x35b8c731
+ (BOOL)_hasDownloadProgressForDownloadStatus:(int)downloadStatus downloadIdentifier:(id)identifier isTemporaryCloudDownload:(BOOL)download mediaItemPersistentID:(id)anId;	// 0x35beabb1
+ (BOOL)_isDownloadableForRedownloadParameters:(id)redownloadParameters filePath:(id)path downloadStatus:(int)status isTemporaryCloudDownload:(BOOL)download;	// 0x35beb055
+ (BOOL)_isValidItemProperty:(id)property;	// 0x35b8ce75
+ (BOOL)canFilterByProperty:(id)property;	// 0x35b8c221
+ (id)daapKeyForMediaProperty:(id)mediaProperty;	// 0x35bf19c5
+ (id)daapValueFromMediaValue:(id)mediaValue mediaProperty:(id)property;	// 0x35bf1c11
+ (id)dynamicProperties;	// 0x35b8c625
+ (id)mediaPropertyForDAAPKey:(id)daapkey;	// 0x35bf18bd
+ (id)mediaValueFromDAAPValue:(id)daapvalue mediaProperty:(id)property;	// 0x35bf1ad1
+ (id)persistentIDPropertyForGroupingType:(int)groupingType;	// 0x35b8c40d
+ (id)titlePropertyForGroupingType:(int)groupingType;	// 0x35b8c50d
- (id)initWithCoder:(id)coder;	// 0x35b8c11d
- (id)initWithPersistentID:(unsigned long long)persistentID;	// 0x35b8c011
- (id)_bestStoreURL;	// 0x35b8c359
- (id)_directStoreURL;	// 0x35b8dc21
// declared property getter: - (BOOL)_hasDownloadProgress;	// 0x35beac7d
// declared property getter: - (BOOL)_isDownloadable;	// 0x35beb091
- (id)_libraryLinkArtist;	// 0x35b8ddc5
- (id)_libraryLinkKind;	// 0x35b8de39
- (id)_libraryLinkPlaylistName;	// 0x35b8def9
- (id)_libraryLinkURL;	// 0x35b8df8d
// declared property getter: - (id)albumArtist;	// 0x35b8ceb9
// declared property getter: - (id)albumTitle;	// 0x35b8cf11
// declared property getter: - (id)artist;	// 0x35b8cf2d
// declared property getter: - (id)artwork;	// 0x35b8cf49
// declared property getter: - (double)bookmarkTime;	// 0x35b8cf65
- (id)chapterOfType:(int)type atIndex:(unsigned)index;	// 0x35b8d6d9
- (id)chapterOfType:(int)type atTime:(double)time;	// 0x35b8d7a9
// declared property getter: - (id)chapters;	// 0x35b8c715
- (id)chaptersOfType:(int)type;	// 0x35b8d5bd
// declared property getter: - (id)composer;	// 0x35b8cfdd
- (unsigned)countOfChaptersOfType:(int)type;	// 0x35b8d8ad
// declared property getter: - (id)effectiveAlbumArtist;	// 0x35b8ced5
// declared property getter: - (double)effectiveStopTime;	// 0x35b8d145
- (void)encodeWithCoder:(id)coder;	// 0x35b8c1a5
- (BOOL)existsInLibrary;	// 0x35b8c391
- (void)gaplessHeuristicInfo:(unsigned *)info duration:(unsigned *)duration lastPacketsResync:(unsigned *)resync encodingDelay:(unsigned *)delay encodingDrain:(unsigned *)drain;	// 0x35b8d96d
// declared property getter: - (id)genre;	// 0x35b8cff9
// declared property getter: - (BOOL)hasBeenPlayed;	// 0x35b8d519
- (unsigned)hash;	// 0x35b8c06d
- (BOOL)isEqual:(id)equal;	// 0x35b8c085
// declared property getter: - (BOOL)isITunesU;	// 0x35b8d045
// declared property getter: - (BOOL)isRental;	// 0x35b8d015
// declared property getter: - (id)lastPlayedDate;	// 0x35b8d3b9
// declared property getter: - (id)lastSkippedDate;	// 0x35b8d4e1
// declared property getter: - (int)mediaType;	// 0x35b8d075
// declared property getter: - (unsigned)playCount;	// 0x35b8d2c9
// declared property getter: - (unsigned)playCountSinceSync;	// 0x35b8d341
// declared property getter: - (double)playbackDuration;	// 0x35b8d0a9
// declared property getter: - (id)podcastTitle;	// 0x35b8d189
- (id)predicateForProperty:(id)property;	// 0x35b8d289
// declared property getter: - (unsigned)rating;	// 0x35b8d1a5
// declared property getter: - (id)releaseDate;	// 0x35b8d21d
// declared property getter: - (BOOL)rememberBookmarkTime;	// 0x35b8d58d
- (id)representativeItem;	// 0x35b8c38d
// declared property setter: - (void)setBookmarkTime:(double)time;	// 0x35b8cf99
// declared property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x35b8d549
// declared property setter: - (void)setLastPlayedDate:(id)date;	// 0x35b8d3d5
// declared property setter: - (void)setLastSkippedDate:(id)date;	// 0x35b8d4fd
// declared property setter: - (void)setPlayCount:(unsigned)count;	// 0x35b8d2fd
// declared property setter: - (void)setPlayCountSinceSync:(unsigned)sync;	// 0x35b8d375
// declared property setter: - (void)setRating:(unsigned)rating;	// 0x35b8d1d9
// declared property setter: - (void)setSkipCount:(unsigned)count;	// 0x35b8d425
// declared property setter: - (void)setSkipCountSinceSync:(unsigned)sync;	// 0x35b8d49d
// declared property getter: - (unsigned)skipCount;	// 0x35b8d3f1
// declared property getter: - (unsigned)skipCountSinceSync;	// 0x35b8d469
// declared property getter: - (double)startTime;	// 0x35b8d0dd
// declared property getter: - (double)stopTime;	// 0x35b8d111
// declared property getter: - (id)title;	// 0x35b8d239
- (id)valueForProperty:(id)property;	// 0x35b8c2b1
// declared property getter: - (unsigned)year;	// 0x35b8d255
@end

