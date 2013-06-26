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

@class NSString, NSDateFormatter, NSTimer, NSArray, ATVPhotoBrowserView, ATVPhotoFullScreenView, BRPhotoControlFactory, ATVDataClient, ATVDataQuery, ATVDataCollection;

__attribute__((visibility("hidden")))
@interface ATVDPAPPhotoBrowserController : BRViewController <ATVPhotoFullScreenViewDataSource, ATVPhotoFullScreenViewDelegate> {
	NSTimer *_spinnerTimer;	// 104 = 0x68
	BOOL _dataRequiresUpdate;	// 108 = 0x6c
	long _collectionItemCount;	// 112 = 0x70
	BOOL _photoBrowserViewReloadPending;	// 116 = 0x74
	id _screenSaverSetCollectionBlock;	// 120 = 0x78
	ATVPhotoBrowserView *_photoBrowserView;	// 124 = 0x7c
	ATVPhotoFullScreenView *_photoFullScreenView;	// 128 = 0x80
	BRPhotoControlFactory *_controlFactory;	// 132 = 0x84
	ATVDataClient *_dataClient;	// 136 = 0x88
	NSString *_collectionType;	// 140 = 0x8c
	ATVDataCollection *_collection;	// 144 = 0x90
	NSDateFormatter *_dateFormatter;	// 148 = 0x94
	ATVDataQuery *_pendingDataQuery;	// 152 = 0x98
	ATVDataQuery *_pendingCollectionMetaDataQuery;	// 156 = 0x9c
	NSArray *_resultData;	// 160 = 0xa0
}
@property(retain, nonatomic) ATVDataCollection *_collection;	// G=0x3396d5; S=0x3396e5; @synthesize
@property(retain, nonatomic) NSString *_collectionType;	// G=0x3396b5; S=0x3396c5; @synthesize
@property(retain, nonatomic) BRPhotoControlFactory *_controlFactory;	// G=0x339675; S=0x339685; @synthesize
@property(retain, nonatomic) ATVDataClient *_dataClient;	// G=0x339695; S=0x3396a5; @synthesize
@property(retain, nonatomic) NSDateFormatter *_dateFormatter;	// G=0x3396f5; S=0x339705; @synthesize
@property(retain, nonatomic) ATVPhotoBrowserView *_photoBrowserView;	// G=0x339635; S=0x339645; @synthesize
@property(retain, nonatomic) ATVPhotoFullScreenView *_photoFullScreenView;	// G=0x339655; S=0x339665; @synthesize
@property(retain, nonatomic) NSArray *_resultData;	// G=0x339735; S=0x339745; @synthesize
@property(retain, nonatomic) ATVDataQuery *pendingCollectionMetaDataQuery;	// G=0x339725; S=0x3395b9; @synthesize=_pendingCollectionMetaDataQuery
@property(retain, nonatomic) ATVDataQuery *pendingDataQuery;	// G=0x339715; S=0x339561; @synthesize=_pendingDataQuery
@property(copy, nonatomic) id screenSaverSetCollectionBlock;	// G=0x339611; S=0x339625; @synthesize=_screenSaverSetCollectionBlock
+ (id)controllerForCollection:(id)collection dataClient:(id)client;	// 0x338e65
+ (id)controllerForCollectionType:(id)collectionType dataClient:(id)client;	// 0x338e11
- (id)initWithColletionType:(id)colletionType collection:(id)collection dataClient:(id)client;	// 0x338eb9
// declared property getter: - (id)_collection;	// 0x3396d5
- (long)_collectionItemCount;	// 0x33aaa9
// declared property getter: - (id)_collectionType;	// 0x3396b5
// declared property getter: - (id)_controlFactory;	// 0x339675
// declared property getter: - (id)_dataClient;	// 0x339695
- (void)_dataClientDataUpdated:(id)updated;	// 0x33b451
- (void)_dataClientStatusChanged:(id)changed;	// 0x33b531
- (void)_dataQueryComplete:(id)complete;	// 0x33b029
// declared property getter: - (id)_dateFormatter;	// 0x3396f5
- (void)_executeDataQuery;	// 0x33aaed
- (void)_handleSlideshowSelection:(id)selection;	// 0x339e51
- (void)_handleUseForScreensaverSelection:(id)screensaverSelection;	// 0x33a061
- (void)_initiateSlideshowPlaybackAtIndex:(long)index inPhotos:(id)photos withOptions:(id)options;	// 0x33a439
// declared property getter: - (id)_photoBrowserView;	// 0x339635
// declared property getter: - (id)_photoFullScreenView;	// 0x339655
- (void)_playObjectAtIndex:(long)index shuffle:(BOOL)shuffle;	// 0x33a291
- (void)_playerLastPlayedAsset:(id)asset;	// 0x33a5c9
- (void)_playerStateChanged:(id)changed;	// 0x33a51d
- (void)_reload;	// 0x339b91
// declared property getter: - (id)_resultData;	// 0x339735
- (void)_screensaverPhotosDidChange:(id)_screensaverPhotos;	// 0x33a641
- (void)_setSubtitleForObjectAtIndex:(long)index;	// 0x339cf5
- (void)_showSpinner;	// 0x3399d9
- (BOOL)_switchToPhotoBrowserView;	// 0x339ad9
- (void)_updateButtons;	// 0x339755
- (BOOL)brEventAction:(id)action;	// 0x3394fd
- (void)controlWasActivated;	// 0x3393bd
- (void)controlWasDeactivated;	// 0x339435
- (void)dealloc;	// 0x3391d1
- (void)fullScreenView:(id)view didDisplayItemAtIndex:(long)index;	// 0x33aa89
- (void)fullScreenView:(id)view didSelectItemAtIndex:(long)index;	// 0x33aa75
- (id)fullScreenView:(id)view objectAtIndex:(long)index;	// 0x33aa1d
- (void)grid:(id)grid didFocusItemAtIndex:(long)index;	// 0x33a861
- (void)grid:(id)grid didPlayItemAtIndex:(long)index;	// 0x33aa09
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0x33a875
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x33a7c9
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x33a775
- (void)layoutSubcontrols;	// 0x33949d
- (long)numberOfColumnsInGrid:(id)grid;	// 0x33a711
- (long)numberOfItemsInFullScreenView:(id)fullScreenView;	// 0x33aa55
- (long)numberOfItemsInGrid:(id)grid;	// 0x33a651
// declared property getter: - (id)pendingCollectionMetaDataQuery;	// 0x339725
// declared property getter: - (id)pendingDataQuery;	// 0x339715
// declared property getter: - (id)screenSaverSetCollectionBlock;	// 0x339611
// declared property setter: - (void)setPendingCollectionMetaDataQuery:(id)query;	// 0x3395b9
// declared property setter: - (void)setPendingDataQuery:(id)query;	// 0x339561
// declared property setter: - (void)setScreenSaverSetCollectionBlock:(id)block;	// 0x339625
// declared property setter: - (void)set_collection:(id)collection;	// 0x3396e5
// declared property setter: - (void)set_collectionType:(id)type;	// 0x3396c5
// declared property setter: - (void)set_controlFactory:(id)factory;	// 0x339685
// declared property setter: - (void)set_dataClient:(id)client;	// 0x3396a5
// declared property setter: - (void)set_dateFormatter:(id)formatter;	// 0x339705
// declared property setter: - (void)set_photoBrowserView:(id)view;	// 0x339645
// declared property setter: - (void)set_photoFullScreenView:(id)view;	// 0x339665
// declared property setter: - (void)set_resultData:(id)data;	// 0x339745
- (void)wasPushed;	// 0x33932d
@end
