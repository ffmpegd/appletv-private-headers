/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary, NSData, NSArray, MLMovieProperties, MLContentRating, NSString;

@interface MLTrackImport : NSObject <NSCopying> {
	NSData *_artworkData;	// 4 = 0x4
	NSString *_assetFilePath;	// 8 = 0x8
	NSArray *_chapters;	// 12 = 0xc
	NSMutableDictionary *_properties;	// 16 = 0x10
	BOOL _shouldAddToPurchasedPlaylist;	// 20 = 0x14
	BOOL _shouldDeleteExistingArtwork;	// 21 = 0x15
	BOOL _assignArtworkCacheIDFromAlbum;	// 22 = 0x16
}
@property(copy, nonatomic) NSData *artworkData;	// G=0x305d8271; S=0x305d8285; @synthesize=_artworkData
@property(copy, nonatomic) NSString *assetFilePath;	// G=0x305d8295; S=0x305d82a9; @synthesize=_assetFilePath
@property(assign, nonatomic) BOOL assignArtworkCacheIDFromAlbum;	// G=0x305d82b9; S=0x305d82c9; @synthesize=_assignArtworkCacheIDFromAlbum
@property(copy, nonatomic) NSArray *chapters;	// G=0x305d82d9; S=0x305d82ed; @synthesize=_chapters
@property(copy, nonatomic) MLContentRating *contentRating;	// G=0x305d79bd; S=0x305d7bb9; 
@property(readonly, assign, nonatomic) NSDictionary *entityProperties;	// G=0x305d7a45; 
@property(assign, nonatomic) unsigned long mediaType;	// G=0x305d7a71; S=0x305d7c01; 
@property(copy, nonatomic) MLMovieProperties *movieProperties;	// G=0x305d7ad1; S=0x305d7ca5; 
@property(assign, nonatomic) BOOL shouldAddToPurchasedPlaylist;	// G=0x305d82fd; S=0x305d830d; @synthesize=_shouldAddToPurchasedPlaylist
@property(assign, nonatomic) BOOL shouldDeleteExistingArtwork;	// G=0x305d831d; S=0x305d832d; @synthesize=_shouldDeleteExistingArtwork
+ (void)initialize;	// 0x305d7749
- (id)init;	// 0x305d76fd
- (void).cxx_destruct;	// 0x305d833d
- (void)_addSortStrings;	// 0x305d8181
// declared property getter: - (id)artworkData;	// 0x305d8271
// declared property getter: - (id)assetFilePath;	// 0x305d8295
// declared property getter: - (BOOL)assignArtworkCacheIDFromAlbum;	// 0x305d82b9
// declared property getter: - (id)chapters;	// 0x305d82d9
// declared property getter: - (id)contentRating;	// 0x305d79bd
- (id)copyEntityProperties;	// 0x305d7e79
- (id)copyWithZone:(NSZone *)zone;	// 0x305d78ad
// declared property getter: - (id)entityProperties;	// 0x305d7a45
// declared property getter: - (unsigned long)mediaType;	// 0x305d7a71
// declared property getter: - (id)movieProperties;	// 0x305d7ad1
- (void)normalizeEntityProperties;	// 0x305d7e99
// declared property setter: - (void)setArtworkData:(id)data;	// 0x305d8285
// declared property setter: - (void)setAssetFilePath:(id)path;	// 0x305d82a9
// declared property setter: - (void)setAssignArtworkCacheIDFromAlbum:(BOOL)album;	// 0x305d82c9
// declared property setter: - (void)setChapters:(id)chapters;	// 0x305d82ed
// declared property setter: - (void)setContentRating:(id)rating;	// 0x305d7bb9
// declared property setter: - (void)setMediaType:(unsigned long)type;	// 0x305d7c01
// declared property setter: - (void)setMovieProperties:(id)properties;	// 0x305d7ca5
// declared property setter: - (void)setShouldAddToPurchasedPlaylist:(BOOL)addToPurchasedPlaylist;	// 0x305d830d
// declared property setter: - (void)setShouldDeleteExistingArtwork:(BOOL)deleteExistingArtwork;	// 0x305d832d
- (void)setValue:(id)value forEntityProperty:(id)entityProperty;	// 0x305d7d9d
// declared property getter: - (BOOL)shouldAddToPurchasedPlaylist;	// 0x305d82fd
// declared property getter: - (BOOL)shouldDeleteExistingArtwork;	// 0x305d831d
- (id)valueForEntityProperty:(id)entityProperty;	// 0x305d7e59
@end

