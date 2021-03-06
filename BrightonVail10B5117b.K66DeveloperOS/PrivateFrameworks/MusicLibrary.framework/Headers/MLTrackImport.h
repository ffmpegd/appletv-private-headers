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
@property(copy, nonatomic) NSData *artworkData;	// G=0x348c7789; S=0x348c779d; @synthesize=_artworkData
@property(copy, nonatomic) NSString *assetFilePath;	// G=0x348c77ad; S=0x348c77c1; @synthesize=_assetFilePath
@property(assign, nonatomic) BOOL assignArtworkCacheIDFromAlbum;	// G=0x348c77d1; S=0x348c77e1; @synthesize=_assignArtworkCacheIDFromAlbum
@property(copy, nonatomic) NSArray *chapters;	// G=0x348c77f1; S=0x348c7805; @synthesize=_chapters
@property(copy, nonatomic) MLContentRating *contentRating;	// G=0x348c6ed5; S=0x348c70d1; 
@property(readonly, assign, nonatomic) NSDictionary *entityProperties;	// G=0x348c6f5d; 
@property(assign, nonatomic) unsigned long mediaType;	// G=0x348c6f89; S=0x348c7119; 
@property(copy, nonatomic) MLMovieProperties *movieProperties;	// G=0x348c6fe9; S=0x348c71bd; 
@property(assign, nonatomic) BOOL shouldAddToPurchasedPlaylist;	// G=0x348c7815; S=0x348c7825; @synthesize=_shouldAddToPurchasedPlaylist
@property(assign, nonatomic) BOOL shouldDeleteExistingArtwork;	// G=0x348c7835; S=0x348c7845; @synthesize=_shouldDeleteExistingArtwork
+ (void)initialize;	// 0x348c6c61
- (id)init;	// 0x348c6c15
- (void).cxx_destruct;	// 0x348c7855
- (void)_addSortStrings;	// 0x348c7699
// declared property getter: - (id)artworkData;	// 0x348c7789
// declared property getter: - (id)assetFilePath;	// 0x348c77ad
// declared property getter: - (BOOL)assignArtworkCacheIDFromAlbum;	// 0x348c77d1
// declared property getter: - (id)chapters;	// 0x348c77f1
// declared property getter: - (id)contentRating;	// 0x348c6ed5
- (id)copyEntityProperties;	// 0x348c7391
- (id)copyWithZone:(NSZone *)zone;	// 0x348c6dc5
// declared property getter: - (id)entityProperties;	// 0x348c6f5d
// declared property getter: - (unsigned long)mediaType;	// 0x348c6f89
// declared property getter: - (id)movieProperties;	// 0x348c6fe9
- (void)normalizeEntityProperties;	// 0x348c73b1
// declared property setter: - (void)setArtworkData:(id)data;	// 0x348c779d
// declared property setter: - (void)setAssetFilePath:(id)path;	// 0x348c77c1
// declared property setter: - (void)setAssignArtworkCacheIDFromAlbum:(BOOL)album;	// 0x348c77e1
// declared property setter: - (void)setChapters:(id)chapters;	// 0x348c7805
// declared property setter: - (void)setContentRating:(id)rating;	// 0x348c70d1
// declared property setter: - (void)setMediaType:(unsigned long)type;	// 0x348c7119
// declared property setter: - (void)setMovieProperties:(id)properties;	// 0x348c71bd
// declared property setter: - (void)setShouldAddToPurchasedPlaylist:(BOOL)addToPurchasedPlaylist;	// 0x348c7825
// declared property setter: - (void)setShouldDeleteExistingArtwork:(BOOL)deleteExistingArtwork;	// 0x348c7845
- (void)setValue:(id)value forEntityProperty:(id)entityProperty;	// 0x348c72b5
// declared property getter: - (BOOL)shouldAddToPurchasedPlaylist;	// 0x348c7815
// declared property getter: - (BOOL)shouldDeleteExistingArtwork;	// 0x348c7835
- (id)valueForEntityProperty:(id)entityProperty;	// 0x348c7371
@end

