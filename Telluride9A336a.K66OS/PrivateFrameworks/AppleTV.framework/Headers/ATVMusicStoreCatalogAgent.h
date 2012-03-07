/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVCatalogAgent.h"
#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library


@interface ATVMusicStoreCatalogAgent : NSObject <ATVCatalogAgent> {
}
+ (void)_augmentStoreOffers:(id)offers purchaseOfferParams:(id)params;	// 0x3396fe9d
+ (id)_backgroundGradientImageForItem:(id)item;	// 0x339731dd
+ (id)_backgroundImageForItem:(id)item;	// 0x339731bd
+ (id)_backgroundImageForItem:(id)item imageName:(id)name;	// 0x339731fd
+ (CGSize)_backgroundImageSizeForItem:(id)item inset:(float *)inset;	// 0x33973071
+ (void)_catalogControlRequestProcessed:(id)processed;	// 0x3396f1ed
+ (id)_catalogPageControlForItem:(id)item;	// 0x3397079d
+ (BOOL)_checkForPurchases:(id)purchases metadata:(id)metadata userInfo:(id)info;	// 0x3396fc51
+ (void)_checkForPurchasesComplete:(id)purchasesComplete;	// 0x3396fd71
+ (id)_collectionControlsForPageItem:(id)pageItem requestedBy:(id)by dividerSeparated:(BOOL)separated;	// 0x33971a15
+ (id)_controlForItem:(id)item;	// 0x339702e1
+ (void)_controlForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x339706a9
+ (id)_controlForRequestParameters:(id)requestParameters identifier:(id)identifier merchant:(id)merchant;	// 0x339700e1
+ (id)_controlForURL:(id)url identifier:(id)identifier merchant:(id)merchant;	// 0x33970269
+ (id)_createItemTypeMap;	// 0x3396ce09
+ (id)_firstControlOfType:(Class)type inArray:(id)array;	// 0x33972ad5
+ (id)_formattedPageContentCountString:(id)string;	// 0x33972429
+ (id)_headerControlsForPageItem:(id)pageItem;	// 0x33971f1d
+ (id)_listPageForItem:(id)item;	// 0x33970c4d
+ (id)_mediaTypeForStoreLink:(id)storeLink;	// 0x3396f635
+ (id)_mediaTypeForStoreMediaCollectionType:(id)storeMediaCollectionType;	// 0x3396f4b5
+ (id)_mediaTypeForStoreMediaType:(id)storeMediaType;	// 0x3396f2f5
+ (id)_moreInfoHeaderControlsForPageItem:(id)pageItem;	// 0x33972139
+ (void)_playEventMediaAsset:(id)asset swapCatalogApplianceController:(BOOL)controller;	// 0x3396f96d
+ (void)_playVideoClip:(id)clip;	// 0x3396f69d
+ (void)_popToItemController:(id)itemController;	// 0x3396f2a1
+ (id)_roomDescriptionControlsForPageItem:(id)pageItem;	// 0x33972b7d
+ (id)_roomPageContainerForItem:(id)item withScroller:(id)scroller;	// 0x33971051
+ (id)_roomPageForItem:(id)item;	// 0x33970ded
+ (id)_scrollerControlsFromHeaderControls:(id)headerControls collectionControls:(id)controls;	// 0x33972399
+ (id)_setupScroller;	// 0x33970a2d
+ (id)_supplementPageForItem:(id)item;	// 0x33970ba5
+ (id)_tabbedPageForItem:(id)item;	// 0x33971499
+ (void)acquireItem:(id)item;	// 0x3396c321
+ (id)allLeafItemsForItem:(id)item;	// 0x3396ddc1
+ (void)augmentPageDictionaryWithPurchases:(id)purchases purchaseCheckResponse:(id)response;	// 0x3396e925
+ (id)catalogHandler;	// 0x3396c131
+ (void)checkForPurchases;	// 0x3396c28d
+ (id)checkForPurchasesRequestForPageDictionary:(id)pageDictionary;	// 0x3396e401
+ (id)configureRelatedControlsFromControl:(id)control style:(int)style;	// 0x3396e1d1
+ (id)controlForItem:(id)item;	// 0x3396cdf9
+ (void)controlForObject:(id)object;	// 0x3396ca75
+ (id)controlForObject:(id)object merchant:(id)merchant;	// 0x3396cab5
+ (id)coverArtForItem:(id)item;	// 0x3396d91d
+ (id)coverArtURLForItem:(id)item featured:(BOOL)featured thumbnail:(BOOL)thumbnail;	// 0x3396db0d
+ (long)downloadItem:(id)item;	// 0x3396c599
+ (id)episodeArtURLForItem:(id)item;	// 0x3396dbfd
+ (void)initialize;	// 0x3396be25
+ (BOOL)isItemFeatured:(id)featured;	// 0x3396dcb1
+ (BOOL)isItemOrdered:(id)ordered;	// 0x3396dcd9
+ (BOOL)isPurchaseAllowedForItem:(id)item;	// 0x3396c215
+ (BOOL)isTemplateParameterSet:(id)set forItem:(id)item;	// 0x3396dd01
+ (long)itemIDForItem:(id)item;	// 0x3396d7e1
+ (int)itemType:(id)type;	// 0x3396d089
+ (id)mediaAssetForStoreOffer:(id)storeOffer;	// 0x3396d261
+ (id)mediaTypeForItem:(id)item;	// 0x3396d1bd
+ (void)playItem:(id)item;	// 0x3396e0d9
+ (void)playStoreItem:(id)item;	// 0x3396df6d
+ (id)plistFromURLDocument:(id)urldocument;	// 0x3396e145
+ (void)processResponseDocument:(id)document userInfo:(id)info;	// 0x3396eda9
+ (void)registerClass:(Class)aClass withTemplateName:(id)templateName;	// 0x3396c6b1
+ (long)repurchaseItem:(id)item context:(void *)context;	// 0x3396c509
+ (void)sendPingForItem:(id)item;	// 0x3396c805
+ (void)setDownloadFunction:(/*function-pointer*/ void *)function;	// 0x3396c301
+ (void)setPurchaseFunction:(/*function-pointer*/ void *)function;	// 0x3396c2d1
+ (void)setRentalFunction:(/*function-pointer*/ void *)function;	// 0x3396c2e1
+ (void)setRepurchaseFunction:(/*function-pointer*/ void *)function;	// 0x3396c311
+ (void)setSubscribeFunction:(/*function-pointer*/ void *)function;	// 0x3396c2f1
+ (BOOL)showAllTitles:(id)titles;	// 0x3396dc61
+ (BOOL)showTitleAndSubtitle:(id)subtitle;	// 0x3396dc89
+ (BOOL)storeVersionIsCompatibileForPageDictionary:(id)pageDictionary redirectURL:(id *)url;	// 0x3396c97d
+ (void)subscribeToItem:(id)item;	// 0x3396c579
@end

