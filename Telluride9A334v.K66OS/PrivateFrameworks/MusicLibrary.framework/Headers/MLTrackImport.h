/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class NSData, NSMutableDictionary, MLMovieProperties, NSDictionary, MLContentRating, NSString, NSArray;

@interface MLTrackImport : NSObject <NSCopying> {
@private
	NSData *_artworkData;	// 4 = 0x4
	NSString *_assetFilePath;	// 8 = 0x8
	NSArray *_chapters;	// 12 = 0xc
	NSMutableDictionary *_properties;	// 16 = 0x10
	BOOL _shouldAddToPurchasedPlaylist;	// 20 = 0x14
	BOOL _shouldDeleteExistingArtwork;	// 21 = 0x15
	BOOL _assignArtworkCacheIDFromAlbum;	// 22 = 0x16
}
@property(copy, nonatomic) NSData *artworkData;	// G=0x3380d08d; S=0x3380d09d; @synthesize=_artworkData
@property(copy, nonatomic) NSString *assetFilePath;	// G=0x3380d0c1; S=0x3380d0d1; @synthesize=_assetFilePath
@property(assign, nonatomic) BOOL assignArtworkCacheIDFromAlbum;	// G=0x3380d0f5; S=0x3380d105; @synthesize=_assignArtworkCacheIDFromAlbum
@property(copy, nonatomic) NSArray *chapters;	// G=0x3380d115; S=0x3380d125; @synthesize=_chapters
@property(copy, nonatomic) MLContentRating *contentRating;	// G=0x3380c921; S=0x3380cae1; 
@property(readonly, assign, nonatomic) NSDictionary *entityProperties;	// G=0x3380c99d; 
@property(assign, nonatomic) unsigned long mediaType;	// G=0x3380c9d5; S=0x3380cb35; 
@property(copy, nonatomic) MLMovieProperties *movieProperties;	// G=0x3380ca25; S=0x3380cbbd; 
@property(assign, nonatomic) BOOL shouldAddToPurchasedPlaylist;	// G=0x3380d149; S=0x3380d159; @synthesize=_shouldAddToPurchasedPlaylist
@property(assign, nonatomic) BOOL shouldDeleteExistingArtwork;	// G=0x3380d169; S=0x3380d179; @synthesize=_shouldDeleteExistingArtwork
+ (void)initialize;	// 0x3380c6d1
- (id)init;	// 0x3380c609
- (void)_addSortStrings;	// 0x3380cfe9
// declared property getter: - (id)artworkData;	// 0x3380d08d
// declared property getter: - (id)assetFilePath;	// 0x3380d0c1
// declared property getter: - (BOOL)assignArtworkCacheIDFromAlbum;	// 0x3380d0f5
// declared property getter: - (id)chapters;	// 0x3380d115
// declared property getter: - (id)contentRating;	// 0x3380c921
- (id)copyEntityProperties;	// 0x3380cd7d
- (id)copyWithZone:(NSZone *)zone;	// 0x3380c815
- (void)dealloc;	// 0x3380c649
// declared property getter: - (id)entityProperties;	// 0x3380c99d
// declared property getter: - (unsigned long)mediaType;	// 0x3380c9d5
// declared property getter: - (id)movieProperties;	// 0x3380ca25
- (void)normalizeEntityProperties;	// 0x3380cd9d
// declared property setter: - (void)setArtworkData:(id)data;	// 0x3380d09d
// declared property setter: - (void)setAssetFilePath:(id)path;	// 0x3380d0d1
// declared property setter: - (void)setAssignArtworkCacheIDFromAlbum:(BOOL)album;	// 0x3380d105
// declared property setter: - (void)setChapters:(id)chapters;	// 0x3380d125
// declared property setter: - (void)setContentRating:(id)rating;	// 0x3380cae1
// declared property setter: - (void)setMediaType:(unsigned long)type;	// 0x3380cb35
// declared property setter: - (void)setMovieProperties:(id)properties;	// 0x3380cbbd
// declared property setter: - (void)setShouldAddToPurchasedPlaylist:(BOOL)addToPurchasedPlaylist;	// 0x3380d159
// declared property setter: - (void)setShouldDeleteExistingArtwork:(BOOL)deleteExistingArtwork;	// 0x3380d179
- (void)setValue:(id)value forEntityProperty:(id)entityProperty;	// 0x3380ccad
// declared property getter: - (BOOL)shouldAddToPurchasedPlaylist;	// 0x3380d149
// declared property getter: - (BOOL)shouldDeleteExistingArtwork;	// 0x3380d169
- (id)valueForEntityProperty:(id)entityProperty;	// 0x3380cd35
@end
