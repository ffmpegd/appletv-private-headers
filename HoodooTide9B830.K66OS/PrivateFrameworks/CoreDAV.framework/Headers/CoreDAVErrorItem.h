/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CoreDAVErrorItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_numberOfMatchesWithinLimits;	// 24 = 0x18
	CoreDAVItemWithNoChildren *_validSyncToken;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_noUIDConflict;	// 32 = 0x20
	CoreDAVItemWithNoChildren *_validAddressData;	// 36 = 0x24
	CoreDAVItemWithNoChildren *_maxResourceSize;	// 40 = 0x28
	CoreDAVItemWithNoChildren *_uid;	// 44 = 0x2c
	CoreDAVItemWithNoChildren *_ctagOkay;	// 48 = 0x30
	CoreDAVItemWithNoChildren *_maxImageSize;	// 52 = 0x34
	CoreDAVItemWithNoChildren *_invalidImageType;	// 56 = 0x38
	CoreDAVItemWithNoChildren *_imageError;	// 60 = 0x3c
	CoreDAVLeafItem *_status;	// 64 = 0x40
}
@property(retain) CoreDAVItemWithNoChildren *ctagOkay;	// G=0x35dc1e09; S=0x35dc1e1d; @synthesize=_ctagOkay
@property(retain) CoreDAVItemWithNoChildren *imageError;	// G=0x35dc1eb1; S=0x35dc1ec5; @synthesize=_imageError
@property(retain) CoreDAVItemWithNoChildren *invalidImageType;	// G=0x35dc1e79; S=0x35dc1e8d; @synthesize=_invalidImageType
@property(retain) CoreDAVItemWithNoChildren *maxImageSize;	// G=0x35dc1e41; S=0x35dc1e55; @synthesize=_maxImageSize
@property(retain) CoreDAVItemWithNoChildren *maxResourceSize;	// G=0x35dc1d99; S=0x35dc1dad; @synthesize=_maxResourceSize
@property(retain) CoreDAVItemWithNoChildren *noUIDConflict;	// G=0x35dc1d29; S=0x35dc1d3d; @synthesize=_noUIDConflict
@property(retain) CoreDAVItemWithNoChildren *numberOfMatchesWithinLimits;	// G=0x35dc1cb9; S=0x35dc1ccd; @synthesize=_numberOfMatchesWithinLimits
@property(retain) CoreDAVLeafItem *status;	// G=0x35dc1ee9; S=0x35dc1efd; @synthesize=_status
@property(retain) CoreDAVItemWithNoChildren *uid;	// G=0x35dc1dd1; S=0x35dc1de5; @synthesize=_uid
@property(retain) CoreDAVItemWithNoChildren *validAddressData;	// G=0x35dc1d61; S=0x35dc1d75; @synthesize=_validAddressData
@property(retain) CoreDAVItemWithNoChildren *validSyncToken;	// G=0x35dc1cf1; S=0x35dc1d05; @synthesize=_validSyncToken
- (id)init;	// 0x35dc116d
- (id)copyParseRules;	// 0x35dc15b9
// declared property getter: - (id)ctagOkay;	// 0x35dc1e09
- (void)dealloc;	// 0x35dc1199
- (id)description;	// 0x35dc12ad
// declared property getter: - (id)imageError;	// 0x35dc1eb1
// declared property getter: - (id)invalidImageType;	// 0x35dc1e79
// declared property getter: - (id)maxImageSize;	// 0x35dc1e41
// declared property getter: - (id)maxResourceSize;	// 0x35dc1d99
// declared property getter: - (id)noUIDConflict;	// 0x35dc1d29
// declared property getter: - (id)numberOfMatchesWithinLimits;	// 0x35dc1cb9
// declared property setter: - (void)setCtagOkay:(id)okay;	// 0x35dc1e1d
// declared property setter: - (void)setImageError:(id)error;	// 0x35dc1ec5
// declared property setter: - (void)setInvalidImageType:(id)type;	// 0x35dc1e8d
// declared property setter: - (void)setMaxImageSize:(id)size;	// 0x35dc1e55
// declared property setter: - (void)setMaxResourceSize:(id)size;	// 0x35dc1dad
// declared property setter: - (void)setNoUIDConflict:(id)conflict;	// 0x35dc1d3d
// declared property setter: - (void)setNumberOfMatchesWithinLimits:(id)matchesWithinLimits;	// 0x35dc1ccd
// declared property setter: - (void)setStatus:(id)status;	// 0x35dc1efd
// declared property setter: - (void)setUid:(id)uid;	// 0x35dc1de5
// declared property setter: - (void)setValidAddressData:(id)data;	// 0x35dc1d75
// declared property setter: - (void)setValidSyncToken:(id)token;	// 0x35dc1d05
// declared property getter: - (id)status;	// 0x35dc1ee9
// declared property getter: - (id)uid;	// 0x35dc1dd1
// declared property getter: - (id)validAddressData;	// 0x35dc1d61
// declared property getter: - (id)validSyncToken;	// 0x35dc1cf1
@end
