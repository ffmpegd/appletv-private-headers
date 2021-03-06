/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVPhotoFullScreenViewDataSource.h"
#import "ATVPhotoFullScreenViewDelegate.h"
#import "BRViewController.h"

@class NSString, NSTimer, NSArray, ATVDataClient, ATVPhotoBrowserView, ATVPhotoFullScreenView, ATVDataQuery, BRPhotoControlFactory, ATVDataCollection, NSDateFormatter;

__attribute__((visibility("hidden")))
@interface ATVDPAPPhotoBrowserController : BRViewController <ATVPhotoFullScreenViewDataSource, ATVPhotoFullScreenViewDelegate> {
	NSTimer *_spinnerTimer;	// 100 = 0x64
	BOOL _dataRequiresUpdate;	// 104 = 0x68
	long _collectionItemCount;	// 108 = 0x6c
	BOOL _photoBrowserViewReloadPending;	// 112 = 0x70
	id _screenSaverSetCollectionBlock;	// 116 = 0x74
	ATVPhotoBrowserView *_photoBrowserView;	// 120 = 0x78
	ATVPhotoFullScreenView *_photoFullScreenView;	// 124 = 0x7c
	BRPhotoControlFactory *_controlFactory;	// 128 = 0x80
	ATVDataClient *_dataClient;	// 132 = 0x84
	NSString *_collectionType;	// 136 = 0x88
	ATVDataCollection *_collection;	// 140 = 0x8c
	NSDateFormatter *_dateFormatter;	// 144 = 0x90
	ATVDataQuery *_pendingDataQuery;	// 148 = 0x94
	ATVDataQuery *_pendingCollectionMetaDataQuery;	// 152 = 0x98
	NSArray *_resultData;	// 156 = 0x9c
}
@property(retain, nonatomic) ATVDataCollection *_collection;	// G=0x308bed; S=0x308bfd; @synthesize
@property(retain, nonatomic) NSString *_collectionType;	// G=0x308bcd; S=0x308bdd; @synthesize
@property(retain, nonatomic) BRPhotoControlFactory *_controlFactory;	// G=0x308b8d; S=0x308b9d; @synthesize
@property(retain, nonatomic) ATVDataClient *_dataClient;	// G=0x308bad; S=0x308bbd; @synthesize
@property(retain, nonatomic) NSDateFormatter *_dateFormatter;	// G=0x308c0d; S=0x308c1d; @synthesize
@property(retain, nonatomic) ATVDataQuery *_pendingCollectionMetaDataQuery;	// G=0x308c4d; S=0x308c5d; @synthesize
@property(retain, nonatomic) ATVDataQuery *_pendingDataQuery;	// G=0x308c2d; S=0x308c3d; @synthesize
@property(retain, nonatomic) ATVPhotoBrowserView *_photoBrowserView;	// G=0x308b4d; S=0x308b5d; @synthesize
@property(retain, nonatomic) ATVPhotoFullScreenView *_photoFullScreenView;	// G=0x308b6d; S=0x308b7d; @synthesize
@property(retain, nonatomic) NSArray *_resultData;	// G=0x308c6d; S=0x308c7d; @synthesize
@property(copy, nonatomic) id screenSaverSetCollectionBlock;	// G=0x308b29; S=0x308b3d; @synthesize=_screenSaverSetCollectionBlock
+ (id)controllerForCollection:(id)collection dataClient:(id)client;	// 0x30837d
+ (id)controllerForCollectionType:(id)collectionType dataClient:(id)client;	// 0x308329
- (id)initWithColletionType:(id)colletionType collection:(id)collection dataClient:(id)client;	// 0x3083d1
// declared property getter: - (id)_collection;	// 0x308bed
- (long)_collectionItemCount;	// 0x309b1d
// declared property getter: - (id)_collectionType;	// 0x308bcd
// declared property getter: - (id)_controlFactory;	// 0x308b8d
// declared property getter: - (id)_dataClient;	// 0x308bad
- (void)_dataClientDataUpdated:(id)updated;	// 0x30a4a9
- (void)_dataClientStatusChanged:(id)changed;	// 0x30a5c9
- (void)_dataQueryComplete;	// 0x30a099
// declared property getter: - (id)_dateFormatter;	// 0x308c0d
- (void)_executeDataQuery;	// 0x309b61
- (void)_handleSettingsSelection:(id)selection;	// 0x3091f5
- (void)_handleSlideshowSelection:(id)selection;	// 0x309105
- (void)_initiateSlideshowPlaybackAtIndex:(long)index inPhotos:(id)photos withOptions:(id)options;	// 0x3094bd
// declared property getter: - (id)_pendingCollectionMetaDataQuery;	// 0x308c4d
// declared property getter: - (id)_pendingDataQuery;	// 0x308c2d
// declared property getter: - (id)_photoBrowserView;	// 0x308b4d
// declared property getter: - (id)_photoFullScreenView;	// 0x308b6d
- (void)_playObjectAtIndex:(long)index shuffle:(BOOL)shuffle;	// 0x309315
- (void)_playerLastPlayedAsset:(id)asset;	// 0x30964d
- (void)_playerStateChanged:(id)changed;	// 0x3095a1
- (void)_reload;	// 0x308e45
// declared property getter: - (id)_resultData;	// 0x308c6d
- (void)_setSubtitleForObjectAtIndex:(long)index;	// 0x308fa9
- (void)_showSpinner;	// 0x308c8d
- (BOOL)_switchToPhotoBrowserView;	// 0x308d8d
- (BOOL)brEventAction:(id)action;	// 0x308ac5
- (void)controlWasActivated;	// 0x308909
- (void)controlWasDeactivated;	// 0x3089c5
- (void)dealloc;	// 0x3086dd
- (void)fullScreenView:(id)view didDisplayItemAtIndex:(long)index;	// 0x309afd
- (void)fullScreenView:(id)view didSelectItemAtIndex:(long)index;	// 0x309ae9
- (id)fullScreenView:(id)view objectAtIndex:(long)index;	// 0x309a91
- (void)grid:(id)grid didFocusItemAtIndex:(long)index;	// 0x3098d5
- (void)grid:(id)grid didPlayItemAtIndex:(long)index;	// 0x309a7d
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0x3098e9
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x30983d
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x3097e9
- (void)layoutSubcontrols;	// 0x308a65
- (long)numberOfColumnsInGrid:(id)grid;	// 0x309785
- (long)numberOfItemsInFullScreenView:(id)fullScreenView;	// 0x309ac9
- (long)numberOfItemsInGrid:(id)grid;	// 0x3096c5
// declared property getter: - (id)screenSaverSetCollectionBlock;	// 0x308b29
// declared property setter: - (void)setScreenSaverSetCollectionBlock:(id)block;	// 0x308b3d
// declared property setter: - (void)set_collection:(id)collection;	// 0x308bfd
// declared property setter: - (void)set_collectionType:(id)type;	// 0x308bdd
// declared property setter: - (void)set_controlFactory:(id)factory;	// 0x308b9d
// declared property setter: - (void)set_dataClient:(id)client;	// 0x308bbd
// declared property setter: - (void)set_dateFormatter:(id)formatter;	// 0x308c1d
// declared property setter: - (void)set_pendingCollectionMetaDataQuery:(id)query;	// 0x308c5d
// declared property setter: - (void)set_pendingDataQuery:(id)query;	// 0x308c3d
// declared property setter: - (void)set_photoBrowserView:(id)view;	// 0x308b5d
// declared property setter: - (void)set_photoFullScreenView:(id)view;	// 0x308b7d
// declared property setter: - (void)set_resultData:(id)data;	// 0x308c7d
- (void)wasPushed;	// 0x308879
@end

