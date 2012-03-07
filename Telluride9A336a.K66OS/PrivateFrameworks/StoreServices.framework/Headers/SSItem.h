/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSURLConnectionRequestDelegate.h"

@class NSDate, NSDictionary, SSItemImageCollection, SSItemOffer, NSArray, NSMutableArray, SSURLConnectionRequest, NSNumber, NSString, NSURL;

@interface SSItem : NSObject <SSURLConnectionRequestDelegate> {
@private
	NSDate *_expirationDate;	// 4 = 0x4
	NSArray *_offers;	// 8 = 0x8
	NSDictionary *_properties;	// 12 = 0xc
	NSString *_tellAFriendBody;	// 16 = 0x10
	NSString *_tellAFriendBodyMIMEType;	// 20 = 0x14
	NSMutableArray *_tellAFriendHandlers;	// 24 = 0x18
	SSURLConnectionRequest *_tellAFriendRequest;	// 28 = 0x1c
	NSString *_tellAFriendSubject;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSNumber *ITunesStoreIdentifier;	// G=0x341ead55; 
@property(readonly, assign, nonatomic) NSArray *allItemOffers;	// G=0x341ea4c5; 
@property(readonly, assign, nonatomic) NSString *artistName;	// G=0x341ea4fd; 
@property(readonly, assign, nonatomic) float averageUserRating;	// G=0x341ea571; 
@property(readonly, assign, nonatomic) SSItemOffer *defaultItemOffer;	// G=0x341ea5d1; 
@property(readonly, assign, nonatomic) NSDate *expirationDate;	// G=0x341ec5c1; @synthesize=_expirationDate
@property(readonly, assign, nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled;	// G=0x341ea769; 
@property(readonly, assign, nonatomic) SSItemImageCollection *imageCollection;	// G=0x341ea6ed; 
@property(readonly, assign, nonatomic) NSString *itemKind;	// G=0x341eab29; 
@property(readonly, assign, nonatomic) NSString *itemTitle;	// G=0x341ead19; 
@property(readonly, assign, nonatomic) int numberOfUserRatings;	// G=0x341eb041; 
@property(readonly, assign, nonatomic, getter=isRestricted) BOOL restricted;	// G=0x341ea7c5; 
@property(readonly, retain) NSString *tellAFriendBody;	// G=0x341eb279; converted property
@property(readonly, retain) NSString *tellAFriendBodyMIMEType;	// G=0x341eb331; converted property
@property(readonly, retain) NSString *tellAFriendSubject;	// G=0x341eb4b5; converted property
@property(readonly, assign, nonatomic) NSArray *thumbnailImages;	// G=0x341eb56d; 
@property(readonly, assign, nonatomic) NSURL *viewItemURL;	// G=0x341eb5dd; 
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x341eb7e5
// declared property getter: - (id)ITunesStoreIdentifier;	// 0x341ead55
- (void)_finishTellAFriendLoadWithError:(id)error;	// 0x341ec23d
- (id)_offers;	// 0x341ec375
- (void)_setExpirationDate:(id)date;	// 0x341ebfe5
- (id)_tellAFriendDictionary;	// 0x341ec555
// declared property getter: - (id)allItemOffers;	// 0x341ea4c5
- (id)artistIdentifier;	// 0x341eb839
// declared property getter: - (id)artistName;	// 0x341ea4fd
// declared property getter: - (float)averageUserRating;	// 0x341ea571
- (id)bundleIdentifier;	// 0x341eb855
- (id)bundleVersion;	// 0x341eb871
- (id)buyParameters;	// 0x341eb625
- (id)collectionArtistName;	// 0x341eb88d
- (id)collectionIdentifier;	// 0x341eb8a9
- (id)collectionIndexInCollectionGroup;	// 0x341eb8c5
- (id)collectionName;	// 0x341eb8e1
- (id)composerName;	// 0x341eb8fd
- (id)contentRating;	// 0x341eb919
- (void)dealloc;	// 0x341ea3a1
// declared property getter: - (id)defaultItemOffer;	// 0x341ea5d1
- (id)description;	// 0x341eb769
- (id)episodeIdentifier;	// 0x341eb9b5
- (id)episodeSortIdentifier;	// 0x341eb9d1
// declared property getter: - (id)expirationDate;	// 0x341ec5c1
- (id)genreIdentifier;	// 0x341eb9ed
- (id)genreName;	// 0x341eba09
// declared property getter: - (id)imageCollection;	// 0x341ea6ed
- (id)indexInCollection;	// 0x341eba25
- (BOOL)isCompilation;	// 0x341eba41
// declared property getter: - (BOOL)isGameCenterEnabled;	// 0x341ea769
// declared property getter: - (BOOL)isRestricted;	// 0x341ea7c5
// declared property getter: - (id)itemKind;	// 0x341eab29
- (id)itemOfferForIdentifier:(id)identifier;	// 0x341eabf1
// declared property getter: - (id)itemTitle;	// 0x341ead19
- (void)loadTellAFriendMessageWithCompletionHandler:(id)completionHandler;	// 0x341ead9d
- (id)longDescription;	// 0x341eba95
- (id)mediaKind;	// 0x341ebab1
- (id)networkName;	// 0x341ebd95
- (id)numberOfCollectionsInCollectionGroup;	// 0x341ebdb1
- (id)numberOfItemsInCollection;	// 0x341ebdcd
// declared property getter: - (int)numberOfUserRatings;	// 0x341eb041
- (id)playableMedia;	// 0x341eb64d
- (id)preOrderIdentifier;	// 0x341ebf31
- (id)priceDisplay;	// 0x341eb741
- (id)rawItemDictionary;	// 0x341ebde9
- (id)relatedItemsForRelationType:(id)relationType;	// 0x341eb095
- (id)releaseDate;	// 0x341ebe21
- (id)releaseDateString;	// 0x341ebf15
- (void)request:(id)request didFailWithError:(id)error;	// 0x341ec0c5
- (void)requestDidFinish:(id)request;	// 0x341ec111
- (id)seasonNumber;	// 0x341ebf4d
- (id)sendGiftURL;	// 0x341ebf69
- (id)seriesName;	// 0x341ebfc9
- (id)shortDescription;	// 0x341ec029
- (id)softwareType;	// 0x341ec045
// converted property getter: - (id)tellAFriendBody;	// 0x341eb279
// converted property getter: - (id)tellAFriendBodyMIMEType;	// 0x341eb331
- (id)tellAFriendBodyURL;	// 0x341eb429
// converted property getter: - (id)tellAFriendSubject;	// 0x341eb4b5
// declared property getter: - (id)thumbnailImages;	// 0x341eb56d
- (void)urlConnectionRequest:(id)request didReceiveResponse:(id)response;	// 0x341ec13d
- (id)valueForProperty:(id)property;	// 0x341eb595
- (id)videoDetails;	// 0x341ec061
// declared property getter: - (id)viewItemURL;	// 0x341eb5dd
- (id)viewReviewsURL;	// 0x341ec07d
@end

