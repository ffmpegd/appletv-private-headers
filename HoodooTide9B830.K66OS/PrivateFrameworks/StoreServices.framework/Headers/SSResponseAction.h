/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class SSAccount, NSString, NSURL, SSDialog;

@interface SSResponseAction : NSObject <NSCopying> {
@private
	SSAccount *_account;	// 4 = 0x4
	NSString *_actionType;	// 8 = 0x8
	NSString *_creditsString;	// 12 = 0xc
	SSDialog *_dialog;	// 16 = 0x10
	NSString *_footerSection;	// 20 = 0x14
	NSURL *_url;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x30524871; @synthesize=_url
@property(readonly, assign, nonatomic) SSAccount *account;	// G=0x30524821; @synthesize=_account
@property(readonly, assign, nonatomic) NSString *actionType;	// G=0x30524831; @synthesize=_actionType
@property(readonly, assign, nonatomic) NSString *creditsString;	// G=0x30524841; @synthesize=_creditsString
@property(readonly, assign, nonatomic) SSDialog *dialog;	// G=0x30524851; @synthesize=_dialog
@property(readonly, assign, nonatomic) NSString *footerSection;	// G=0x30524861; @synthesize=_footerSection
+ (id)_actionWithActionType:(id)actionType;	// 0x30524445
+ (id)_dialogActionWithDialog:(id)dialog;	// 0x305244b5
+ (id)_invalidateURLBagsAction;	// 0x30524541
+ (id)_selectFooterActionWithSection:(id)section;	// 0x305245b5
+ (id)_setActiveAccountActionWithAccount:(id)account;	// 0x3052464d
+ (id)_setCreditsActionWithCredits:(id)credits account:(id)account;	// 0x305246d9
+ (id)_urlActionWithType:(id)type URL:(id)url;	// 0x30524791
// declared property getter: - (id)URL;	// 0x30524871
// declared property getter: - (id)account;	// 0x30524821
// declared property getter: - (id)actionType;	// 0x30524831
- (id)copyWithZone:(NSZone *)zone;	// 0x305242c1
// declared property getter: - (id)creditsString;	// 0x30524841
- (void)dealloc;	// 0x30524211
- (id)description;	// 0x305243dd
// declared property getter: - (id)dialog;	// 0x30524851
// declared property getter: - (id)footerSection;	// 0x30524861
@end

