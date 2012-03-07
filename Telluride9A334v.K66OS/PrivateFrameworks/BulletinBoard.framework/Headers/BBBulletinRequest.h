/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "BBBulletin.h"
#import "BulletinBoard-Structs.h"

@class BBContent, NSString, NSDate, NSTimeZone, NSArray, BBAction, BBSound;

@interface BBBulletinRequest : BBBulletin {
}
@property(assign, nonatomic) int accessoryStyle;	// @dynamic
@property(copy, nonatomic) BBAction *acknowledgeAction;	// @dynamic
@property(assign, nonatomic) int addressBookRecordID;	// @dynamic
@property(copy, nonatomic) NSString *bulletinID;	// @dynamic
@property(copy, nonatomic) NSArray *buttons;	// @dynamic
@property(assign, nonatomic) BOOL clearable;	// @dynamic
@property(retain, nonatomic) NSDate *date;	// @dynamic
@property(assign, nonatomic) int dateFormatStyle;	// @dynamic
@property(assign, nonatomic) BOOL dateIsAllDay;	// @dynamic
@property(copy, nonatomic) BBAction *defaultAction;	// @dynamic
@property(retain, nonatomic) NSDate *endDate;	// @dynamic
@property(retain, nonatomic) NSDate *expirationDate;	// @dynamic
@property(copy, nonatomic) BBAction *expireAction;	// @dynamic
@property(assign, nonatomic) BOOL expiresOnPublisherDeath;	// @dynamic
@property(copy, nonatomic) NSString *message;	// @dynamic
@property(retain, nonatomic) BBContent *modalAlertContent;	// @dynamic
@property(assign, nonatomic) int primaryAttachmentType;	// S=0x30b295b1; @dynamic
@property(copy, nonatomic) NSString *publisherBulletinID;	// @dynamic
@property(assign, nonatomic) unsigned realertCount;	// G=0x30b297a9; S=0x30b297b9; 
@property(retain, nonatomic) NSDate *recencyDate;	// @dynamic
@property(copy, nonatomic) NSString *recordID;	// @dynamic
@property(copy, nonatomic) BBAction *replyAction;	// @dynamic
@property(copy, nonatomic) NSString *section;	// @dynamic
@property(copy, nonatomic) NSString *sectionID;	// @dynamic
@property(assign, nonatomic) int sectionSubtype;	// @dynamic
@property(assign, nonatomic) BOOL showsUnreadIndicator;	// G=0x30b29979; S=0x30b29931; 
@property(retain, nonatomic) BBSound *sound;	// @dynamic
@property(copy, nonatomic) NSString *subtitle;	// @dynamic
@property(assign, nonatomic) BOOL tentative;	// G=0x30b299c9; S=0x30b29999; 
@property(retain, nonatomic) NSTimeZone *timeZone;	// @dynamic
@property(copy, nonatomic) NSString *title;	// @dynamic
- (void)addAlertSuppressionAppID:(id)anId;	// 0x30b297c9
- (void)addAttachmentOfType:(int)type;	// 0x30b295e1
- (void)addButton:(id)button;	// 0x30b29611
- (void)generateBulletinID;	// 0x30b2992d
- (void)generateNewBulletinID;	// 0x30b29df5
- (BOOL)hasContentModificationsRelativeTo:(id)to;	// 0x30b299e1
- (void)publish;	// 0x30b29771
- (void)publish:(BOOL)publish;	// 0x30b2975d
- (id)publisherMatchID;	// 0x30b29dc1
// declared property getter: - (unsigned)realertCount;	// 0x30b297a9
- (void)setContextValue:(id)value forKey:(id)key;	// 0x30b294e9
// declared property setter: - (void)setPrimaryAttachmentType:(int)type;	// 0x30b295b1
// declared property setter: - (void)setRealertCount:(unsigned)count;	// 0x30b297b9
// declared property setter: - (void)setShowsUnreadIndicator:(BOOL)indicator;	// 0x30b29931
// declared property setter: - (void)setTentative:(BOOL)tentative;	// 0x30b29999
- (void)setUnlockActionLabel:(id)label;	// 0x30b29799
// declared property getter: - (BOOL)showsUnreadIndicator;	// 0x30b29979
// declared property getter: - (BOOL)tentative;	// 0x30b299c9
- (void)withdraw;	// 0x30b29785
@end

