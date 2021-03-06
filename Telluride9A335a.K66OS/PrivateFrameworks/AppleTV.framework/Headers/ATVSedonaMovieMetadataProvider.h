/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVMusicStoreBaseMetadataProvider.h"

@class ATVSedonaCatalogItem;

__attribute__((visibility("hidden")))
@interface ATVSedonaMovieMetadataProvider : ATVMusicStoreBaseMetadataProvider {
@private
	ATVSedonaCatalogItem *_sedonaItem;	// 12 = 0xc
}
+ (void)initialize;	// 0x34129ac5
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x34129e85
- (id)init;	// 0x34129ec1
- (id)initWithCatalogItem:(id)catalogItem;	// 0x34129ed9
- (void)_populateActors:(id)actors;	// 0x3412a5a1
- (void)_populateAudio:(id)audio;	// 0x3412a831
- (void)_populateCategories:(id)categories;	// 0x3412a705
- (void)_populateDirector:(id)director;	// 0x3412a641
- (void)_populateMetadataDetails:(id)details;	// 0x3412a051
- (void)_populateMovieDetails:(id)details;	// 0x3412a0e5
- (void)_populateSubtitles:(id)subtitles;	// 0x3412a795
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x34129f91
- (void)dealloc;	// 0x34129f45
- (void)populateMetadataForControl:(id)control;	// 0x34129fcd
@end

