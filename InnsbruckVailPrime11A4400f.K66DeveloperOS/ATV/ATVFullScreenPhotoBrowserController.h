/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCarouselViewDataSource.h"
#import "BRViewController.h"
#import "AppleTV-Structs.h"

@class NSTimer, NSDate, NSMutableDictionary, NSDictionary, ATVPhotoPlayerSwapViewController, ATVPhotoDetailView, NSArray, ATVPhotoMetadataViewConfigurator;

__attribute__((visibility("hidden")))
@interface ATVFullScreenPhotoBrowserController : BRViewController <ATVCarouselViewDataSource> {
	BOOL _shouldDisplayFullScreenCommentsBadge;	// 104 = 0x68
	int _type;	// 108 = 0x6c
	NSArray *_photos;	// 112 = 0x70
	int _selectedIndex;	// 116 = 0x74
	id _photoDetails;	// 120 = 0x78
	id _photoAssetDetails;	// 124 = 0x7c
	id _photoMetadataDetails;	// 128 = 0x80
	id _onPhotoSelection;	// 132 = 0x84
	id _onLikeSelection;	// 136 = 0x88
	id _onMetadataRequiresUpdate;	// 140 = 0x8c
	id _onMarkCommentsAsViewed;	// 144 = 0x90
	id _onContextMenu;	// 148 = 0x94
	NSMutableDictionary *_transitioningInfo;	// 152 = 0x98
	NSTimer *_photoMetadataViewRedisplayTimer;	// 156 = 0x9c
	NSDate *_photoMetadataViewRedisplayTime;	// 160 = 0xa0
	NSDictionary *_contributorLineAttributes;	// 164 = 0xa4
	ATVPhotoPlayerSwapViewController *_playerVC;	// 168 = 0xa8
	ATVFullScreenPhotoSelectionMemento _photoSelectionMemento;	// 172 = 0xac
}
@property(retain, nonatomic) NSDictionary *contributorLineAttributes;	// G=0xc403d; S=0xc404d; @synthesize=_contributorLineAttributes
@property(copy, nonatomic) id onContextMenu;	// G=0xc3f4d; S=0xc3f61; @synthesize=_onContextMenu
@property(copy, nonatomic) id onLikeSelection;	// G=0xc3ee1; S=0xc3ef5; @synthesize=_onLikeSelection
@property(copy, nonatomic) id onMarkCommentsAsViewed;	// G=0xc3f29; S=0xc3f3d; @synthesize=_onMarkCommentsAsViewed
@property(copy, nonatomic) id onMetadataRequiresUpdate;	// G=0xc3f05; S=0xc3f19; @synthesize=_onMetadataRequiresUpdate
@property(copy, nonatomic) id onPhotoSelection;	// G=0xc3ebd; S=0xc3ed1; @synthesize=_onPhotoSelection
@property(copy, nonatomic) id photoAssetDetails;	// G=0xc3e75; S=0xc3e89; @synthesize=_photoAssetDetails
@property(readonly, assign, nonatomic) ATVPhotoDetailView *photoDetailView;	// G=0xbf4c9; 
@property(copy, nonatomic) id photoDetails;	// G=0xc3e51; S=0xc3e65; @synthesize=_photoDetails
@property(copy, nonatomic) id photoMetadataDetails;	// G=0xc3e99; S=0xc3ead; @synthesize=_photoMetadataDetails
@property(readonly, assign, nonatomic) ATVPhotoMetadataViewConfigurator *photoMetadataView;	// G=0xbf4d9; 
@property(retain, nonatomic) NSDate *photoMetadataViewRedisplayTime;	// G=0xc4005; S=0xc4015; @synthesize=_photoMetadataViewRedisplayTime
@property(assign, nonatomic) __weak NSTimer *photoMetadataViewRedisplayTimer;	// G=0xc3fe5; S=0xc2849; @synthesize=_photoMetadataViewRedisplayTimer
@property(assign, nonatomic) ATVFullScreenPhotoSelectionMemento photoSelectionMemento;	// G=0xc3f71; S=0xc3f8d; @synthesize=_photoSelectionMemento
@property(copy, nonatomic) NSArray *photos;	// G=0xc3dfd; S=0xc3e11; @synthesize=_photos
@property(retain, nonatomic) ATVPhotoPlayerSwapViewController *playerVC;	// G=0xc4075; S=0xc4085; @synthesize=_playerVC
@property(assign, nonatomic) int selectedIndex;	// G=0xc3e21; S=0xbf521; @synthesize=_selectedIndex
@property(readonly, assign, nonatomic) id selectedPhoto;	// G=0xbf549; 
@property(assign, nonatomic) BOOL shouldDisplayContributorLine;	// G=0xbf681; S=0xbf5fd; 
@property(assign, nonatomic) BOOL shouldDisplayFullScreenCommentsBadge;	// G=0xc3e31; S=0xc3e41; @synthesize=_shouldDisplayFullScreenCommentsBadge
@property(retain, nonatomic) NSMutableDictionary *transitioningInfo;	// G=0xc3fad; S=0xc3fbd; @synthesize=_transitioningInfo
@property(assign, nonatomic) int type;	// G=0xc3ddd; S=0xc3ded; @synthesize=_type
- (id)init;	// 0xbf2b1
- (id)initWithType:(int)type;	// 0xbf2c9
- (void).cxx_destruct;	// 0xc40ad
- (id)_accessibilityLikeTextControl;	// 0xc35d1
- (void)_clearPhotoMetadataView;	// 0xc29a1
- (CGSize)_commentsScreenImageSize;	// 0xc3371
- (id)_contributorLineAttributes;	// 0xc3d49
- (CGSize)_fullScreenSize;	// 0xc32f5
- (BOOL)_handleLikeSelection:(id)selection;	// 0xc3455
- (void)_handlePhotoMetadataViewRedisplayTimer:(id)timer;	// 0xc3555
- (void)_handleSelectionChangeWithPhotosUpdated:(BOOL)photosUpdated;	// 0xc2559
- (void)_hidePhotoMetadataViewOnSelectionChange;	// 0xc2a99
- (void)_updateCommentsBadgeWithAnimationDuration:(double)animationDuration;	// 0xc31c9
- (void)_updateHeaderWithContributorLine:(id)contributorLine liked:(id)liked likeStatus:(id)status commentsBadgeCount:(unsigned)count;	// 0xc2d01
- (int)_updatePhotoSelectionTimestamp;	// 0xc28d1
- (id)accessibilityHint;	// 0xc3b35
- (id)accessibilityLabel;	// 0xc3765
- (BOOL)accessibilityOutputsRangeForChildren;	// 0xc3c81
- (id)accessibilityRangeString;	// 0xc3c85
- (id)accessibilitySecondaryLabel;	// 0xc3bb5
- (BOOL)brEventAction:(id)action;	// 0xc0e5d
- (id)carouselView:(id)view itemAtIndex:(unsigned)index;	// 0xc138d
// declared property getter: - (id)contributorLineAttributes;	// 0xc403d
- (unsigned)numberOfItemsForCarouselView:(id)carouselView;	// 0xc1351
// declared property getter: - (id)onContextMenu;	// 0xc3f4d
// declared property getter: - (id)onLikeSelection;	// 0xc3ee1
// declared property getter: - (id)onMarkCommentsAsViewed;	// 0xc3f29
// declared property getter: - (id)onMetadataRequiresUpdate;	// 0xc3f05
// declared property getter: - (id)onPhotoSelection;	// 0xc3ebd
// declared property getter: - (id)photoAssetDetails;	// 0xc3e75
// declared property getter: - (id)photoDetailView;	// 0xbf4c9
// declared property getter: - (id)photoDetails;	// 0xc3e51
// declared property getter: - (id)photoMetadataDetails;	// 0xc3e99
// declared property getter: - (id)photoMetadataView;	// 0xbf4d9
// declared property getter: - (id)photoMetadataViewRedisplayTime;	// 0xc4005
// declared property getter: - (id)photoMetadataViewRedisplayTimer;	// 0xc3fe5
// declared property getter: - (ATVFullScreenPhotoSelectionMemento)photoSelectionMemento;	// 0xc3f71
// declared property getter: - (id)photos;	// 0xc3dfd
// declared property getter: - (id)playerVC;	// 0xc4075
- (id)providersForContextMenu;	// 0xc1275
- (void)reloadPhotoMetadata;	// 0xbf8d9
- (void)reloadPhotoMetadataHeader;	// 0xbfe91
// declared property getter: - (int)selectedIndex;	// 0xc3e21
// declared property getter: - (id)selectedPhoto;	// 0xbf549
// declared property setter: - (void)setContributorLineAttributes:(id)attributes;	// 0xc404d
// declared property setter: - (void)setOnContextMenu:(id)menu;	// 0xc3f61
// declared property setter: - (void)setOnLikeSelection:(id)selection;	// 0xc3ef5
// declared property setter: - (void)setOnMarkCommentsAsViewed:(id)viewed;	// 0xc3f3d
// declared property setter: - (void)setOnMetadataRequiresUpdate:(id)update;	// 0xc3f19
// declared property setter: - (void)setOnPhotoSelection:(id)selection;	// 0xc3ed1
// declared property setter: - (void)setPhotoAssetDetails:(id)details;	// 0xc3e89
// declared property setter: - (void)setPhotoDetails:(id)details;	// 0xc3e65
// declared property setter: - (void)setPhotoMetadataDetails:(id)details;	// 0xc3ead
// declared property setter: - (void)setPhotoMetadataViewRedisplayTime:(id)time;	// 0xc4015
// declared property setter: - (void)setPhotoMetadataViewRedisplayTimer:(id)timer;	// 0xc2849
// declared property setter: - (void)setPhotoSelectionMemento:(ATVFullScreenPhotoSelectionMemento)memento;	// 0xc3f8d
// declared property setter: - (void)setPhotos:(id)photos;	// 0xc3e11
- (void)setPhotos:(id)photos initialIndex:(int)index;	// 0xbf705
// declared property setter: - (void)setPlayerVC:(id)vc;	// 0xc4085
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0xbf521
// declared property setter: - (void)setShouldDisplayContributorLine:(BOOL)displayContributorLine;	// 0xbf5fd
// declared property setter: - (void)setShouldDisplayFullScreenCommentsBadge:(BOOL)displayFullScreenCommentsBadge;	// 0xc3e41
// declared property setter: - (void)setTransitioningInfo:(id)info;	// 0xc3fbd
// declared property setter: - (void)setType:(int)type;	// 0xc3ded
// declared property getter: - (BOOL)shouldDisplayContributorLine;	// 0xbf681
// declared property getter: - (BOOL)shouldDisplayFullScreenCommentsBadge;	// 0xc3e31
- (void)startPlaybackForSelectedPhotoWithMediaAsset:(id)mediaAsset;	// 0xbffe9
// declared property getter: - (id)transitioningInfo;	// 0xc3fad
// declared property getter: - (int)type;	// 0xc3ddd
- (void)updatePhotoAtIndex:(unsigned)index updatedPhoto:(id)photo;	// 0xbf809
- (void)wasPopped;	// 0xc0ce1
- (void)wasPushed;	// 0xc0365
@end

