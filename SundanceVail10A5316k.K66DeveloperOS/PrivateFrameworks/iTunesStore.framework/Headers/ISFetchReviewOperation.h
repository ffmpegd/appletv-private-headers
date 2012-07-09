/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class NSURL, ISReview;

@interface ISFetchReviewOperation : ISOperation {
	int _assetType;	// 60 = 0x3c
	BOOL _backgroundReview;	// 64 = 0x40
	unsigned long long _itemIdentifier;	// 68 = 0x44
	unsigned _softwareVersionIdentifier;	// 76 = 0x4c
	ISReview *_review;	// 80 = 0x50
	NSURL *_url;	// 84 = 0x54
}
@property(assign) int assetType;	// G=0x335393bd; S=0x335393d1; @synthesize=_assetType
@property(assign, getter=isBackgroundReview) BOOL backgroundReview;	// G=0x335393e9; S=0x33539401; @synthesize=_backgroundReview
@property(assign) unsigned long long itemIdentifier;	// G=0x33539419; S=0x3353944d; @synthesize=_itemIdentifier
@property(retain) ISReview *review;	// G=0x33539481; S=0x33539495; @synthesize=_review
@property(assign) unsigned softwareVersionIdentifier;	// G=0x335394a5; S=0x335394b9; @synthesize=_softwareVersionIdentifier
@property(retain) NSURL *url;	// G=0x335394d1; S=0x335394e5; @synthesize=_url
- (void)_fetchReviewInformation;	// 0x33539009
// declared property getter: - (int)assetType;	// 0x335393bd
- (void)dealloc;	// 0x33538f31
// declared property getter: - (BOOL)isBackgroundReview;	// 0x335393e9
// declared property getter: - (unsigned long long)itemIdentifier;	// 0x33539419
// declared property getter: - (id)review;	// 0x33539481
- (void)run;	// 0x33538f89
// declared property setter: - (void)setAssetType:(int)type;	// 0x335393d1
// declared property setter: - (void)setBackgroundReview:(BOOL)review;	// 0x33539401
// declared property setter: - (void)setItemIdentifier:(unsigned long long)identifier;	// 0x3353944d
// declared property setter: - (void)setReview:(id)review;	// 0x33539495
// declared property setter: - (void)setSoftwareVersionIdentifier:(unsigned)identifier;	// 0x335394b9
// declared property setter: - (void)setUrl:(id)url;	// 0x335394e5
// declared property getter: - (unsigned)softwareVersionIdentifier;	// 0x335394a5
// declared property getter: - (id)url;	// 0x335394d1
@end
