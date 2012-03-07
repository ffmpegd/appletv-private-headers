/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "BulletinBoard-Structs.h"

@class BBAction, BBSound, BBAssertion, BBAttachments, NSString, NSDate, NSTimeZone, NSMutableDictionary, NSArray, NSDictionary, NSSet, BBContent, BBObserver;

@interface BBBulletin : NSObject <NSCopying, NSCoding> {
@private
	NSString *_sectionID;	// 4 = 0x4
	NSString *_publisherRecordID;	// 8 = 0x8
	NSString *_publisherBulletinID;	// 12 = 0xc
	int _addressBookRecordID;	// 16 = 0x10
	int _sectionSubtype;	// 20 = 0x14
	BBContent *_content;	// 24 = 0x18
	BBContent *_modalAlertContent;	// 28 = 0x1c
	NSDate *_date;	// 32 = 0x20
	NSDate *_endDate;	// 36 = 0x24
	NSDate *_recencyDate;	// 40 = 0x28
	int _dateFormatStyle;	// 44 = 0x2c
	BOOL _dateIsAllDay;	// 48 = 0x30
	NSTimeZone *_timeZone;	// 52 = 0x34
	int _accessoryStyle;	// 56 = 0x38
	BOOL _clearable;	// 60 = 0x3c
	BBSound *_sound;	// 64 = 0x40
	BBAttachments *_attachments;	// 68 = 0x44
	NSString *_unlockActionLabelOverride;	// 72 = 0x48
	NSMutableDictionary *_actions;	// 76 = 0x4c
	NSArray *_buttons;	// 80 = 0x50
	BOOL _expiresOnPublisherDeath;	// 84 = 0x54
	NSDictionary *_context;	// 88 = 0x58
	NSDate *_expirationDate;	// 92 = 0x5c
	NSString *_bulletinID;	// 96 = 0x60
	NSDate *_lastInterruptDate;	// 100 = 0x64
	BBAssertion *_lifeAssertion;	// 104 = 0x68
	BBObserver *_observer;	// 108 = 0x6c
	unsigned realertCount_deprecated;	// 112 = 0x70
	NSSet *alertSuppressionAppIDs_deprecated;	// 116 = 0x74
}
@property(assign, nonatomic) int accessoryStyle;	// G=0x34cbdd09; S=0x34cbdd19; @synthesize=_accessoryStyle
@property(copy, nonatomic) BBAction *acknowledgeAction;	// G=0x34cbc3c9; S=0x34cbc3f1; 
@property(retain, nonatomic) NSMutableDictionary *actions;	// G=0x34cbddd5; S=0x34cbdde5; @synthesize=_actions
@property(assign, nonatomic) int addressBookRecordID;	// G=0x34cbdb61; S=0x34cbdb71; @synthesize=_addressBookRecordID
@property(readonly, assign, nonatomic) NSSet *alertSuppressionAppIDs;	// G=0x34cce98d; 
@property(copy, nonatomic) NSSet *alertSuppressionAppIDs_deprecated;	// G=0x34cbdf91; S=0x34cbdfa1; @synthesize
@property(retain, nonatomic) BBAttachments *attachments;	// G=0x34cbc2e1; S=0x34cbdd7d; @synthesize=_attachments
@property(readonly, assign, nonatomic) BOOL bannerShowsSubtitle;	// G=0x34cceca5; 
@property(copy, nonatomic) NSString *bulletinID;	// G=0x34cbdea1; S=0x34cbdeb1; @synthesize=_bulletinID
@property(copy, nonatomic) NSArray *buttons;	// G=0x34cbde09; S=0x34cbc589; @synthesize=_buttons
@property(assign, nonatomic) BOOL clearable;	// G=0x34cbdd29; S=0x34cbdd39; @synthesize=_clearable
@property(readonly, assign, nonatomic) BOOL coalescesWhenLocked;	// G=0x34ccea21; 
@property(retain, nonatomic) BBContent *content;	// G=0x34cbc215; S=0x34cbdba1; @synthesize=_content
@property(retain, nonatomic) NSDictionary *context;	// G=0x34cbde39; S=0x34cbde49; @synthesize=_context
@property(retain, nonatomic) NSDate *date;	// G=0x34cbdbf9; S=0x34cbdc09; @synthesize=_date
@property(assign, nonatomic) int dateFormatStyle;	// G=0x34cbdc95; S=0x34cbdca5; @synthesize=_dateFormatStyle
@property(assign, nonatomic) BOOL dateIsAllDay;	// G=0x34cbdcb5; S=0x34cbdcc5; @synthesize=_dateIsAllDay
@property(copy, nonatomic) BBAction *defaultAction;	// G=0x34cbc349; S=0x34cbc371; 
@property(retain, nonatomic) NSDate *endDate;	// G=0x34cbdc2d; S=0x34cbdc3d; @synthesize=_endDate
@property(retain, nonatomic) NSDate *expirationDate;	// G=0x34cbde6d; S=0x34cbde7d; @synthesize=_expirationDate
@property(copy, nonatomic) BBAction *expireAction;	// G=0x34cbc4c9; S=0x34cbc4f1; 
@property(assign, nonatomic) BOOL expiresOnPublisherDeath;	// G=0x34cbde19; S=0x34cbde29; @synthesize=_expiresOnPublisherDeath
@property(readonly, assign, nonatomic) NSString *fullUnlockActionLabel;	// G=0x34cce87d; 
@property(readonly, assign, nonatomic) int iPodOutAlertType;	// G=0x34ccee19; 
@property(readonly, assign, nonatomic) BOOL inertWhenLocked;	// G=0x34ccebad; 
@property(retain, nonatomic) NSDate *lastInterruptDate;	// G=0x34cbded5; S=0x34cbdee5; @synthesize=_lastInterruptDate
@property(retain, nonatomic) BBAssertion *lifeAssertion;	// G=0x34cbdf09; S=0x34cbdf19; @synthesize=_lifeAssertion
@property(copy, nonatomic) NSString *message;	// G=0x34cbc149; S=0x34cbc1d9; 
@property(readonly, assign, nonatomic) unsigned messageNumberOfLines;	// G=0x34cce601; 
@property(readonly, assign, nonatomic) NSString *missedBannerDescriptionFormat;	// G=0x34cce801; 
@property(retain, nonatomic) BBContent *modalAlertContent;	// G=0x34cbdbc5; S=0x34cbdbd5; @synthesize=_modalAlertContent
@property(retain, nonatomic) BBObserver *observer;	// G=0x34cbdf3d; S=0x34cbdf4d; @synthesize=_observer
@property(readonly, assign, nonatomic) BOOL orderSectionUsingRecencyDate;	// G=0x34cce6a9; 
@property(readonly, assign, nonatomic) BOOL preservesUnlockActionCase;	// G=0x34ccec29; 
@property(readonly, assign, nonatomic) int primaryAttachmentType;	// G=0x34cbc265; 
@property(copy, nonatomic) NSString *publisherBulletinID;	// G=0x34cbdb2d; S=0x34cbdb3d; @synthesize=_publisherBulletinID
@property(readonly, assign, nonatomic) unsigned realertCount;	// G=0x34cceb19; 
@property(assign, nonatomic) unsigned realertCount_deprecated;	// G=0x34cbdf71; S=0x34cbdf81; @synthesize
@property(retain, nonatomic) NSDate *recencyDate;	// G=0x34cbdc61; S=0x34cbdc71; @synthesize=_recencyDate
@property(copy, nonatomic) NSString *recordID;	// G=0x34cbdaf9; S=0x34cbdb09; @synthesize=_publisherRecordID
@property(copy, nonatomic) BBAction *replyAction;	// G=0x34cbc449; S=0x34cbc471; 
@property(copy, nonatomic) NSString *section;	// G=0x34cbc171; S=0x34cbc205; 
@property(copy, nonatomic) NSString *sectionID;	// G=0x34cbdac5; S=0x34cbdad5; @synthesize=_sectionID
@property(assign, nonatomic) int sectionSubtype;	// G=0x34cbdb81; S=0x34cbdb91; @synthesize=_sectionSubtype
@property(readonly, assign, nonatomic) BOOL showsDateInFloatingLockScreenAlert;	// G=0x34cce6fd; 
@property(readonly, assign, nonatomic) BOOL showsSubtitle;	// G=0x34cce5ad; 
@property(retain, nonatomic) BBSound *sound;	// G=0x34cbdd49; S=0x34cbdd59; @synthesize=_sound
@property(copy, nonatomic) NSString *subtitle;	// G=0x34cbc121; S=0x34cbc1ad; 
@property(readonly, assign, nonatomic) unsigned subtypePriority;	// G=0x34cced9d; 
@property(readonly, assign, nonatomic) BOOL suppressesMessageForPrivacy;	// G=0x34ccea9d; 
@property(retain, nonatomic) NSTimeZone *timeZone;	// G=0x34cbdcd5; S=0x34cbdce5; @synthesize=_timeZone
@property(copy, nonatomic) NSString *title;	// G=0x34cbc0f9; S=0x34cbc181; 
@property(readonly, assign, nonatomic) NSString *topic;	// G=0x34cce751; 
@property(readonly, assign, nonatomic) NSString *unlockActionLabel;	// G=0x34cce8f9; 
@property(copy, nonatomic) NSString *unlockActionLabelOverride;	// G=0x34cbdda1; S=0x34cbddb1; @synthesize=_unlockActionLabelOverride
@property(readonly, assign, nonatomic) BOOL usesVariableLayout;	// G=0x34cce655; 
@property(readonly, assign, nonatomic) BOOL visuallyIndicatesWhenDateIsInFuture;	// G=0x34cced21; 
+ (id)bulletinWithBulletin:(id)bulletin;	// 0x34cbc011
- (id)init;	// 0x34cbc075
- (id)initWithCoder:(id)coder;	// 0x34cbd02d
- (id)_actionKeyForButtonIndex:(unsigned)buttonIndex;	// 0x34cbc549
- (void)_fillOutCopy:(id)copy withZone:(NSZone *)zone;	// 0x34cbcb39
- (id)_responseForActionKey:(id)actionKey;	// 0x34cbc761
// declared property getter: - (int)accessoryStyle;	// 0x34cbdd09
// declared property getter: - (id)acknowledgeAction;	// 0x34cbc3c9
// declared property getter: - (id)actions;	// 0x34cbddd5
// declared property getter: - (int)addressBookRecordID;	// 0x34cbdb61
// declared property getter: - (id)alertSuppressionAppIDs;	// 0x34cce98d
// declared property getter: - (id)alertSuppressionAppIDs_deprecated;	// 0x34cbdf91
// declared property getter: - (id)attachments;	// 0x34cbc2e1
- (id)attachmentsCreatingIfNecessary:(BOOL)necessary;	// 0x34cbc2f5
// declared property getter: - (BOOL)bannerShowsSubtitle;	// 0x34cceca5
// declared property getter: - (id)bulletinID;	// 0x34cbdea1
// declared property getter: - (id)buttons;	// 0x34cbde09
// declared property getter: - (BOOL)clearable;	// 0x34cbdd29
// declared property getter: - (BOOL)coalescesWhenLocked;	// 0x34ccea21
- (id)composedAttachmentImage;	// 0x34cd0879
- (id)composedAttachmentImageForKey:(id)key;	// 0x34cd08c9
- (CGSize)composedAttachmentImageSize;	// 0x34cd0899
- (CGSize)composedAttachmentImageSizeForKey:(id)key;	// 0x34cd0911
// declared property getter: - (id)content;	// 0x34cbc215
// declared property getter: - (id)context;	// 0x34cbde39
- (id)copyWithZone:(NSZone *)zone;	// 0x34cbcfd5
// declared property getter: - (id)date;	// 0x34cbdbf9
// declared property getter: - (int)dateFormatStyle;	// 0x34cbdc95
// declared property getter: - (BOOL)dateIsAllDay;	// 0x34cbdcb5
- (void)dealloc;	// 0x34cbbdf5
// declared property getter: - (id)defaultAction;	// 0x34cbc349
- (void)deliverResponse:(id)response;	// 0x34cbca49
- (id)description;	// 0x34cbd9d5
- (void)encodeWithCoder:(id)coder;	// 0x34cbd5b9
// declared property getter: - (id)endDate;	// 0x34cbdc2d
// declared property getter: - (id)expirationDate;	// 0x34cbde6d
// declared property getter: - (id)expireAction;	// 0x34cbc4c9
// declared property getter: - (BOOL)expiresOnPublisherDeath;	// 0x34cbde19
// declared property getter: - (id)fullUnlockActionLabel;	// 0x34cce87d
// declared property getter: - (int)iPodOutAlertType;	// 0x34ccee19
// declared property getter: - (BOOL)inertWhenLocked;	// 0x34ccebad
// declared property getter: - (id)lastInterruptDate;	// 0x34cbded5
// declared property getter: - (id)lifeAssertion;	// 0x34cbdf09
// declared property getter: - (id)message;	// 0x34cbc149
// declared property getter: - (unsigned)messageNumberOfLines;	// 0x34cce601
// declared property getter: - (id)missedBannerDescriptionFormat;	// 0x34cce801
// declared property getter: - (id)modalAlertContent;	// 0x34cbdbc5
- (unsigned)numberOfAdditionalAttachments;	// 0x34cbc28d
- (unsigned)numberOfAdditionalAttachmentsOfType:(int)type;	// 0x34cbc2b5
// declared property getter: - (id)observer;	// 0x34cbdf3d
// declared property getter: - (BOOL)orderSectionUsingRecencyDate;	// 0x34cce6a9
// declared property getter: - (BOOL)preservesUnlockActionCase;	// 0x34ccec29
// declared property getter: - (int)primaryAttachmentType;	// 0x34cbc265
// declared property getter: - (id)publisherBulletinID;	// 0x34cbdb2d
// declared property getter: - (unsigned)realertCount;	// 0x34cceb19
// declared property getter: - (unsigned)realertCount_deprecated;	// 0x34cbdf71
// declared property getter: - (id)recencyDate;	// 0x34cbdc61
// declared property getter: - (id)recordID;	// 0x34cbdaf9
// declared property getter: - (id)replyAction;	// 0x34cbc449
- (id)responseForAcknowledgeAction;	// 0x34cbc8b1
- (id)responseForButtonActionAtIndex:(unsigned)index;	// 0x34cbc8cd
- (id)responseForDefaultAction;	// 0x34cbc879
- (id)responseForExpireAction;	// 0x34cbc8fd
- (id)responseForReplyAction;	// 0x34cbc895
- (id)responseSendBlock;	// 0x34cbc9bd
// declared property getter: - (id)section;	// 0x34cbc171
// declared property getter: - (id)sectionID;	// 0x34cbdac5
// declared property getter: - (int)sectionSubtype;	// 0x34cbdb81
// declared property setter: - (void)setAccessoryStyle:(int)style;	// 0x34cbdd19
// declared property setter: - (void)setAcknowledgeAction:(id)action;	// 0x34cbc3f1
// declared property setter: - (void)setActions:(id)actions;	// 0x34cbdde5
// declared property setter: - (void)setAddressBookRecordID:(int)anId;	// 0x34cbdb71
// declared property setter: - (void)setAlertSuppressionAppIDs_deprecated:(id)deprecated;	// 0x34cbdfa1
// declared property setter: - (void)setAttachments:(id)attachments;	// 0x34cbdd7d
// declared property setter: - (void)setBulletinID:(id)anId;	// 0x34cbdeb1
// declared property setter: - (void)setButtons:(id)buttons;	// 0x34cbc589
// declared property setter: - (void)setClearable:(BOOL)clearable;	// 0x34cbdd39
// declared property setter: - (void)setContent:(id)content;	// 0x34cbdba1
// declared property setter: - (void)setContext:(id)context;	// 0x34cbde49
// declared property setter: - (void)setDate:(id)date;	// 0x34cbdc09
// declared property setter: - (void)setDateFormatStyle:(int)style;	// 0x34cbdca5
// declared property setter: - (void)setDateIsAllDay:(BOOL)day;	// 0x34cbdcc5
// declared property setter: - (void)setDefaultAction:(id)action;	// 0x34cbc371
// declared property setter: - (void)setEndDate:(id)date;	// 0x34cbdc3d
// declared property setter: - (void)setExpirationDate:(id)date;	// 0x34cbde7d
// declared property setter: - (void)setExpireAction:(id)action;	// 0x34cbc4f1
// declared property setter: - (void)setExpiresOnPublisherDeath:(BOOL)death;	// 0x34cbde29
// declared property setter: - (void)setLastInterruptDate:(id)date;	// 0x34cbdee5
// declared property setter: - (void)setLifeAssertion:(id)assertion;	// 0x34cbdf19
// declared property setter: - (void)setMessage:(id)message;	// 0x34cbc1d9
// declared property setter: - (void)setModalAlertContent:(id)content;	// 0x34cbdbd5
// declared property setter: - (void)setObserver:(id)observer;	// 0x34cbdf4d
// declared property setter: - (void)setPublisherBulletinID:(id)anId;	// 0x34cbdb3d
// declared property setter: - (void)setRealertCount_deprecated:(unsigned)deprecated;	// 0x34cbdf81
// declared property setter: - (void)setRecencyDate:(id)date;	// 0x34cbdc71
// declared property setter: - (void)setRecordID:(id)anId;	// 0x34cbdb09
// declared property setter: - (void)setReplyAction:(id)action;	// 0x34cbc471
// declared property setter: - (void)setSection:(id)section;	// 0x34cbc205
// declared property setter: - (void)setSectionID:(id)anId;	// 0x34cbdad5
// declared property setter: - (void)setSectionSubtype:(int)subtype;	// 0x34cbdb91
// declared property setter: - (void)setSound:(id)sound;	// 0x34cbdd59
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x34cbc1ad
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x34cbdce5
// declared property setter: - (void)setTitle:(id)title;	// 0x34cbc181
// declared property setter: - (void)setUnlockActionLabelOverride:(id)override;	// 0x34cbddb1
// declared property getter: - (BOOL)showsDateInFloatingLockScreenAlert;	// 0x34cce6fd
// declared property getter: - (BOOL)showsSubtitle;	// 0x34cce5ad
// declared property getter: - (id)sound;	// 0x34cbdd49
// declared property getter: - (id)subtitle;	// 0x34cbc121
// declared property getter: - (unsigned)subtypePriority;	// 0x34cced9d
// declared property getter: - (BOOL)suppressesMessageForPrivacy;	// 0x34ccea9d
// declared property getter: - (id)timeZone;	// 0x34cbdcd5
// declared property getter: - (id)title;	// 0x34cbc0f9
// declared property getter: - (id)topic;	// 0x34cce751
// declared property getter: - (id)unlockActionLabel;	// 0x34cce8f9
// declared property getter: - (id)unlockActionLabelOverride;	// 0x34cbdda1
// declared property getter: - (BOOL)usesVariableLayout;	// 0x34cce655
// declared property getter: - (BOOL)visuallyIndicatesWhenDateIsInFuture;	// 0x34cced21
@end

