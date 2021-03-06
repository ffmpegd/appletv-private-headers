/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString;

@interface BRThemeInfo : NSObject {
@private
	CGSize _size;	// 4 = 0x4
	NSString *_controllerBackgroundImageName;	// 12 = 0xc
	NSMutableDictionary *_ratingsImages;	// 16 = 0x10
	NSMutableDictionary *_starRatingsImages;	// 20 = 0x14
	NSMutableDictionary *_cachedImages;	// 24 = 0x18
}
+ (id)sharedTheme;	// 0x3289de8d
- (id)init;	// 0x3289ded1
- (id)_cachedImageForFile:(id)file ofType:(id)type;	// 0x328e70dd
- (id)_cachedImages;	// 0x328e70cd
- (id)_imageForFile:(id)file ofType:(id)type;	// 0x328e7bdd
- (id)actionButtonBackgroundImage;	// 0x328b295d
- (id)actionButtonSheenImage;	// 0x328b2981
- (id)airportImageForSignalStrength:(long)signalStrength;	// 0x328e7535
- (id)appleTVIcon;	// 0x328e7b39
- (id)appleTVIconGlow;	// 0x328e7b15
- (id)appleTVIconOOB;	// 0x328e7865
- (float)appleTVIconOOBVerticalOffset;	// 0x328e7051
- (id)appleTVImage;	// 0x328e75dd
- (float)arrowSizeToRowHeightRatio;	// 0x328bb981
- (id)blankImage;	// 0x328e7af1
- (id)boxTitleAttributesForRelated:(BOOL)related;	// 0x328e7f31
- (CGRect)brandImageFrame;	// 0x328e8a05
- (CGRect)centeredMenuHeaderFrameForMasterFrame:(CGRect)masterFrame;	// 0x328e7141
- (float)comboRowHeight;	// 0x328cd8c9
- (id)copyrightAttributes;	// 0x328b280d
- (id)currentlyPlayingImage;	// 0x328ca421
- (id)dashedActionButtonOutlineImage;	// 0x328e77d5
- (void)dealloc;	// 0x328e7b5d
- (id)defaultChapterImage;	// 0x328e7319
- (id)deleteActionHighlightedImage;	// 0x328e778d
- (id)deleteActionImage;	// 0x328e77b1
- (id)digitalExtrasImage;	// 0x328e72f5
- (id)digitalExtrasMetadataBadge;	// 0x328e7289
- (id)digitalLPMetadataBadge;	// 0x328e7265
- (float)dimValue;	// 0x328ce739
- (id)dividerLabelAttributes;	// 0x328c07c9
- (float)dividerRowHeight;	// 0x328ae821
- (id)downloadButtonImage;	// 0x328e7acd
- (CGSize)downsampleSize;	// 0x328b44a5
- (id)emptyPhotoAlbumImage;	// 0x328e7a61
- (id)emptyPhotoEventImage;	// 0x328e7a85
- (id)emptyPhotoShelfImage;	// 0x328e7aa9
- (id)errorFailureReasonAttributes;	// 0x328b5c39
- (id)errorIcon;	// 0x328baf65
- (id)errorSuggestionAttributes;	// 0x328b5c59
- (id)folderIcon;	// 0x328e73f1
- (float)gearIconHorizontalOffset;	// 0x328e7089
- (float)gearIconKerningFactor;	// 0x328e7091
- (id)gearImage;	// 0x328e7199
- (id)geniusIcon;	// 0x328e73cd
- (id)hdBadge;	// 0x328e7205
- (id)highlightedCurrentlyPlayingImage;	// 0x328ca445
- (id)highlightedDigitalExtrasImage;	// 0x328e72d1
- (id)highlightedMenuArrowImage;	// 0x328bb989
- (id)highlightedRefreshIcon;	// 0x328e733d
- (id)highlightedReturnToImage;	// 0x328e79f5
- (id)highlightedSelectedSettingImage;	// 0x328e78ad
- (id)highlightedShuffleImage;	// 0x328c9dd9
- (id)highlightedSyncLinkArrowImage;	// 0x328e79ad
- (id)highlightedSyncLinkImage;	// 0x328ce705
- (id)highlightedVideoItemImage;	// 0x328e74ed
- (float)iTunesAccountSetupHorizontalOffset;	// 0x328e7061
- (id)iTunesAccountSetupIcon;	// 0x328e7841
- (float)iTunesAccountSetupKerningFactor;	// 0x328e7065
- (float)iTunesAccountSetupScaleFactor;	// 0x328e706d
- (id)iTunesNotes;	// 0x328e7625
- (id)iTunesNotesWithReflection;	// 0x328e7601
- (id)labelTextAttributes;	// 0x328e81f5
- (id)largeGeniusIcon;	// 0x328e73a9
- (id)largeGeniusIconWithReflection;	// 0x328e7385
- (id)largeWirelessImage;	// 0x328e77f9
- (id)leftFadeImage;	// 0x328e71e1
- (float)listIconHeight;	// 0x328b5201
- (float)listRowHeight;	// 0x328ad0f5
- (id)localContentProviderImage;	// 0x328e7095
- (id)lockedThumbnail;	// 0x328e74a5
- (id)magnifyingGlassImage;	// 0x328bfb75
- (id)menuActionFocusedImage;	// 0x328c8b01
- (id)menuActionUnfocusedImage;	// 0x328c8b7d
- (id)menuArrowImage;	// 0x328bb95d
- (id)menuItemBoldTextAttributes;	// 0x328e8215
- (id)menuItemSmallTextAttributes;	// 0x328c7965
- (id)menuItemTextAttributes;	// 0x328b5049
- (float)menuMaximumWidthFactor;	// 0x328cca05
- (float)menuMinimumWidthFactor;	// 0x328cc9fd
- (id)menuTitleSubtextAttributes;	// 0x328e81d5
- (id)menuTitleTextAttributes;	// 0x328b4e89
- (float)menuTransitionDuration;	// 0x3289e5fd
- (id)metadataLabelAttributes;	// 0x328b3805
- (id)metadataLineAttributes;	// 0x328b3845
- (id)metadataNumReviewsAttributes;	// 0x328e812d
- (id)metadataOrangeLineAttributes;	// 0x328e816d
- (id)metadataSummaryFieldAttributes;	// 0x328b360d
- (id)metadataTitleAttributes;	// 0x328b3099
- (id)metadataTitleSubtextAttributes;	// 0x328b36ed
- (float)minimumHorizontalTextLayerSpacing;	// 0x328bc905
- (id)missingImage;	// 0x328e7481
- (id)movieMetadataLabelAttributes;	// 0x328e8109
- (id)networkPhotosImage;	// 0x328e766d
- (id)nowPlayingPlayhead;	// 0x328cac71
- (id)nowPlayingTransport;	// 0x328cac4d
- (float)oneLineWithThumbRowHeight;	// 0x328e7c3d
- (float)osdLongTimeOutValue;	// 0x328e70a1
- (float)osdMediumTimeOutValue;	// 0x328e7099
- (float)osdTimeOutValue;	// 0x328be6fd
- (id)pairImage;	// 0x328e7649
- (id)pairingPINTextAttributes;	// 0x328e80e9
- (int)paradeCountThreshold;	// 0x328e70c9
- (float)paragraphRowHeight;	// 0x328e7d59
- (id)partiallyplayedVideoImage;	// 0x328e78f5
- (id)photoSettingsImage;	// 0x328cceed
- (id)photosImage;	// 0x328e7691
- (id)playActionHighlightedImage;	// 0x328e7745
- (id)playActionImage;	// 0x328e7769
- (id)playlistIcon;	// 0x328e745d
- (id)previewActionHighlightedImage;	// 0x328b28d5
- (id)previewActionImage;	// 0x328b28b1
- (float)previewDelayDuration;	// 0x328bb91d
- (id)promptCenteredTextAttributes;	// 0x328e806d
- (id)promptTextAttributes;	// 0x328b4ecd
- (id)purchasedPlaylistIcon;	// 0x328e7439
- (id)queueActionHighlightedImage;	// 0x328e76b5
- (id)queueActionImage;	// 0x328e76d9
- (id)radioItemImage;	// 0x328e74c9
- (id)rateActionHighlightedImage;	// 0x328e76fd
- (id)rateActionImage;	// 0x328e7721
- (id)ratingImageForString:(id)string;	// 0x328b314d
- (id)ratingImageFromStoreString:(id)storeString;	// 0x328bb9ad
- (id)refreshIcon;	// 0x328e7361
- (id)rentalDetailsAttributesForDate:(id)date;	// 0x328e87c1
- (id)rentalMenuItemAttributesForDate:(id)date;	// 0x328e8285
- (id)rentalPosterAttributesForDate:(id)date;	// 0x328e8525
- (id)returnToImage;	// 0x328e7a19
- (id)rightFadeImage;	// 0x328e71bd
- (float)roundRectCornerRadius;	// 0x328bf075
- (id)scrollWidget;	// 0x328e7a3d
- (id)selectedSettingImage;	// 0x328e78d1
- (void)setSize:(CGSize)size;	// 0x3289df5d
- (float)settingsAboutRowHeight;	// 0x328e7cf5
- (id)settingsItemSmallTextAttributes;	// 0x328e804d
- (id)shuffleImage;	// 0x328c9cc9
- (float)slightDimValue;	// 0x328e70b1
- (float)smallHeightDividerRowHeight;	// 0x328e7ca1
- (id)smallHeightListDividerLabelAttributes;	// 0x328e8029
- (id)smallHeightListItemAttributes;	// 0x328e7fe9
- (float)smallHeightListRowHeight;	// 0x328e7ccd
- (id)smallMenuTitleTextAttributes;	// 0x328bfc89
- (id)smallTextAttributes;	// 0x328e81b5
- (id)smartPlaylistIcon;	// 0x328e7415
- (float)spinnerSizeToRowHeightRatio;	// 0x328bfec1
- (id)starRatingImageForString:(id)string;	// 0x328b6b59
- (id)syncLinkArrowImage;	// 0x328e79d1
- (id)syncLinkImage;	// 0x328ce6e1
- (id)syncProgressMainAttributes;	// 0x328e7fc9
- (id)syncProgressSecondaryAttributes;	// 0x328e7fa9
- (id)textEntryInputFieldAttributes;	// 0x328bf695
- (id)textEntryPromptTextAttributesDuJour;	// 0x328e80ad
- (float)textImageNoThumbnailRowHeight;	// 0x328e7d21
- (float)textImageRowHeight;	// 0x328e7c69
- (float)textMenuDividerInset;	// 0x328adb3d
- (float)textMenuItemHDBadgeIconInsetFactor;	// 0x328e70c1
- (float)textMenuItemHDBadgeIconScaleFactor;	// 0x328e70b9
- (float)textMenuItemLeftInsetAndRightInset:(float *)inset;	// 0x328ad09d
- (float)textMenuItemLeftInsetFromOuterMenuEdge;	// 0x328c0819
- (id)tinyDigitalExtrasImage;	// 0x328e72ad
- (CGRect)titleSafeFrame;	// 0x328b3d81
- (id)trackInfoPrimaryAttributes;	// 0x328e7f89
- (id)trackInfoSecondaryAttributes;	// 0x328e7f65
- (float)trickPlayFrameTransitionDuration;	// 0x328e70a9
- (id)truncationEllipsis;	// 0x328af7fd
- (float)twoLineRowHeight;	// 0x328ce2e1
- (id)unboxedLozengeBottom:(BOOL)bottom useBrighterImage:(BOOL)image;	// 0x328a6721
- (id)unboxedLozengeTop:(BOOL)top useBrighterImage:(BOOL)image;	// 0x328a66dd
- (id)unplayedVideoImage;	// 0x328e7951
- (id)verticalDividerImage;	// 0x328e7889
- (float)verticalSpacingOOB;	// 0x328e7059
- (id)videoItemImage;	// 0x328e7511
- (id)waitSpinnerPromptAttributes;	// 0x328b55b9
- (float)wirelessIconHorizontalOffset;	// 0x328e7075
- (float)wirelessIconKerningFactor;	// 0x328e7079
- (float)wirelessIconScaleFactor;	// 0x328e7081
- (id)wirelessImage;	// 0x328e781d
@end

