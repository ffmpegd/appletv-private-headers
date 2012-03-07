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
@property(readonly, assign, nonatomic) BOOL _hasDownloadProgress;	// G=0x33c60c75; 
@property(readonly, assign, nonatomic) BOOL _isDownloadable;	// G=0x33c61089; 
@property(readonly, assign, nonatomic) NSString *albumArtist;	// G=0x33c02dad; 
@property(readonly, assign, nonatomic) NSString *albumTitle;	// G=0x33c02e05; 
@property(readonly, assign, nonatomic) NSString *artist;	// G=0x33c02e21; 
@property(readonly, assign, nonatomic) MPMediaItemArtwork *artwork;	// G=0x33c02e3d; 
@property(assign, nonatomic) double bookmarkTime;	// G=0x33c02e59; S=0x33c02e8d; 
@property(readonly, assign, nonatomic) NSArray *chapters;	// G=0x33c02609; 
@property(readonly, assign, nonatomic) NSString *composer;	// G=0x33c02ed1; 
@property(readonly, assign, nonatomic) NSString *effectiveAlbumArtist;	// G=0x33c02dc9; 
@property(readonly, assign, nonatomic) double effectiveStopTime;	// G=0x33c03039; 
@property(readonly, assign, nonatomic) NSString *genre;	// G=0x33c02eed; 
@property(assign, nonatomic) BOOL hasBeenPlayed;	// G=0x33c0340d; S=0x33c0343d; 
@property(readonly, assign, nonatomic) BOOL isITunesU;	// G=0x33c02f39; 
@property(readonly, assign, nonatomic) BOOL isRental;	// G=0x33c02f09; 
@property(copy, nonatomic) NSDate *lastPlayedDate;	// G=0x33c032ad; S=0x33c032c9; 
@property(copy, nonatomic) NSDate *lastSkippedDate;	// G=0x33c033d5; S=0x33c033f1; 
@property(readonly, assign, nonatomic) int mediaType;	// G=0x33c02f69; 
@property(assign, nonatomic) unsigned playCount;	// G=0x33c031bd; S=0x33c031f1; 
@property(assign, nonatomic) unsigned playCountSinceSync;	// G=0x33c03235; S=0x33c03269; 
@property(readonly, assign, nonatomic) double playbackDuration;	// G=0x33c02f9d; 
@property(readonly, assign, nonatomic) NSString *podcastTitle;	// G=0x33c0307d; 
@property(assign, nonatomic) unsigned rating;	// G=0x33c03099; S=0x33c030cd; 
@property(readonly, assign, nonatomic) NSDate *releaseDate;	// G=0x33c03111; 
@property(readonly, assign, nonatomic) BOOL rememberBookmarkTime;	// G=0x33c03481; 
@property(assign, nonatomic) unsigned skipCount;	// G=0x33c032e5; S=0x33c03319; 
@property(assign, nonatomic) unsigned skipCountSinceSync;	// G=0x33c0335d; S=0x33c03391; 
@property(readonly, assign, nonatomic) double startTime;	// G=0x33c02fd1; 
@property(readonly, assign, nonatomic) double stopTime;	// G=0x33c03005; 
@property(readonly, assign, nonatomic) NSString *title;	// G=0x33c0312d; 
@property(readonly, assign, nonatomic) unsigned year;	// G=0x33c03149; 
+ (void)_createFilterableDictionary;	// 0x33c02625
+ (BOOL)_hasDownloadProgressForDownloadStatus:(int)downloadStatus downloadIdentifier:(id)identifier isTemporaryCloudDownload:(BOOL)download mediaItemPersistentID:(id)anId;	// 0x33c60ba9
+ (BOOL)_isDownloadableForRedownloadParameters:(id)redownloadParameters filePath:(id)path downloadStatus:(int)status isTemporaryCloudDownload:(BOOL)download;	// 0x33c6104d
+ (BOOL)_isValidItemProperty:(id)property;	// 0x33c02d69
+ (BOOL)canFilterByProperty:(id)property;	// 0x33c02115
+ (id)daapKeyForMediaProperty:(id)mediaProperty;	// 0x33c679bd
+ (id)daapValueFromMediaValue:(id)mediaValue mediaProperty:(id)property;	// 0x33c67c09
+ (id)dynamicProperties;	// 0x33c02519
+ (id)mediaPropertyForDAAPKey:(id)daapkey;	// 0x33c678b5
+ (id)mediaValueFromDAAPValue:(id)daapvalue mediaProperty:(id)property;	// 0x33c67ac9
+ (id)persistentIDPropertyForGroupingType:(int)groupingType;	// 0x33c02301
+ (id)titlePropertyForGroupingType:(int)groupingType;	// 0x33c02401
- (id)initWithCoder:(id)coder;	// 0x33c02011
- (id)initWithPersistentID:(unsigned long long)persistentID;	// 0x33c01f05
- (id)_bestStoreURL;	// 0x33c0224d
- (id)_directStoreURL;	// 0x33c03b15
// declared property getter: - (BOOL)_hasDownloadProgress;	// 0x33c60c75
// declared property getter: - (BOOL)_isDownloadable;	// 0x33c61089
- (id)_libraryLinkArtist;	// 0x33c03cb9
- (id)_libraryLinkKind;	// 0x33c03d2d
- (id)_libraryLinkPlaylistName;	// 0x33c03ded
- (id)_libraryLinkURL;	// 0x33c03e81
// declared property getter: - (id)albumArtist;	// 0x33c02dad
// declared property getter: - (id)albumTitle;	// 0x33c02e05
// declared property getter: - (id)artist;	// 0x33c02e21
// declared property getter: - (id)artwork;	// 0x33c02e3d
// declared property getter: - (double)bookmarkTime;	// 0x33c02e59
- (id)chapterOfType:(int)type atIndex:(unsigned)index;	// 0x33c035cd
- (id)chapterOfType:(int)type atTime:(double)time;	// 0x33c0369d
// declared property getter: - (id)chapters;	// 0x33c02609
- (id)chaptersOfType:(int)type;	// 0x33c034b1
// declared property getter: - (id)composer;	// 0x33c02ed1
- (unsigned)countOfChaptersOfType:(int)type;	// 0x33c037a1
// declared property getter: - (id)effectiveAlbumArtist;	// 0x33c02dc9
// declared property getter: - (double)effectiveStopTime;	// 0x33c03039
- (void)encodeWithCoder:(id)coder;	// 0x33c02099
- (BOOL)existsInLibrary;	// 0x33c02285
- (void)gaplessHeuristicInfo:(unsigned *)info duration:(unsigned *)duration lastPacketsResync:(unsigned *)resync encodingDelay:(unsigned *)delay encodingDrain:(unsigned *)drain;	// 0x33c03861
// declared property getter: - (id)genre;	// 0x33c02eed
// declared property getter: - (BOOL)hasBeenPlayed;	// 0x33c0340d
- (unsigned)hash;	// 0x33c01f61
- (BOOL)isEqual:(id)equal;	// 0x33c01f79
// declared property getter: - (BOOL)isITunesU;	// 0x33c02f39
// declared property getter: - (BOOL)isRental;	// 0x33c02f09
// declared property getter: - (id)lastPlayedDate;	// 0x33c032ad
// declared property getter: - (id)lastSkippedDate;	// 0x33c033d5
// declared property getter: - (int)mediaType;	// 0x33c02f69
// declared property getter: - (unsigned)playCount;	// 0x33c031bd
// declared property getter: - (unsigned)playCountSinceSync;	// 0x33c03235
// declared property getter: - (double)playbackDuration;	// 0x33c02f9d
// declared property getter: - (id)podcastTitle;	// 0x33c0307d
- (id)predicateForProperty:(id)property;	// 0x33c0317d
// declared property getter: - (unsigned)rating;	// 0x33c03099
// declared property getter: - (id)releaseDate;	// 0x33c03111
// declared property getter: - (BOOL)rememberBookmarkTime;	// 0x33c03481
- (id)representativeItem;	// 0x33c02281
// declared property setter: - (void)setBookmarkTime:(double)time;	// 0x33c02e8d
// declared property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x33c0343d
// declared property setter: - (void)setLastPlayedDate:(id)date;	// 0x33c032c9
// declared property setter: - (void)setLastSkippedDate:(id)date;	// 0x33c033f1
// declared property setter: - (void)setPlayCount:(unsigned)count;	// 0x33c031f1
// declared property setter: - (void)setPlayCountSinceSync:(unsigned)sync;	// 0x33c03269
// declared property setter: - (void)setRating:(unsigned)rating;	// 0x33c030cd
// declared property setter: - (void)setSkipCount:(unsigned)count;	// 0x33c03319
// declared property setter: - (void)setSkipCountSinceSync:(unsigned)sync;	// 0x33c03391
// declared property getter: - (unsigned)skipCount;	// 0x33c032e5
// declared property getter: - (unsigned)skipCountSinceSync;	// 0x33c0335d
// declared property getter: - (double)startTime;	// 0x33c02fd1
// declared property getter: - (double)stopTime;	// 0x33c03005
// declared property getter: - (id)title;	// 0x33c0312d
- (id)valueForProperty:(id)property;	// 0x33c021a5
// declared property getter: - (unsigned)year;	// 0x33c03149
@end

