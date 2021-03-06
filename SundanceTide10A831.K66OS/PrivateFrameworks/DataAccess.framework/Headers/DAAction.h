/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@protocol NSObject;

@interface DAAction : NSObject <NSCoding> {
	int _itemChangeType;	// 4 = 0x4
	id _serverId;	// 8 = 0x8
	id<NSObject, NSCoding> _changedItem;	// 12 = 0xc
	int _changeId;	// 16 = 0x10
}
@property(assign) int changeId;	// G=0x32173949; S=0x3217395d; @synthesize=_changeId
@property(retain, nonatomic) id changedItem;	// G=0x32173929; @synthesize=_changedItem
@property(readonly, assign) int itemChangeType;	// G=0x32173915; @synthesize=_itemChangeType
@property(readonly, assign, nonatomic) id serverId;	// G=0x32173939; @synthesize=_serverId
- (id)initWithCoder:(id)coder;	// 0x32173555
- (id)initWithItemChangeType:(int)itemChangeType changedItem:(id)item serverId:(id)anId;	// 0x3217330d
- (void)_setChangedItem:(id)item;	// 0x321733a9
// declared property getter: - (int)changeId;	// 0x32173949
// declared property getter: - (id)changedItem;	// 0x32173929
- (ASContact *)contact;	// 0x3216f3e9
- (void)dealloc;	// 0x321732a9
- (id)deletedContactID;	// 0x3216f3d5
- (id)deletedEventID;	// 0x3216f3a1
- (id)deletedNoteID;	// 0x32189b51
- (id)deletedToDoID;	// 0x3217a619
- (id)description;	// 0x32173475
- (void)encodeWithCoder:(id)coder;	// 0x321736cd
- (ASEvent *)event;	// 0x3216f3b5
- (unsigned)hash;	// 0x32173805
- (BOOL)isEqual:(id)equal;	// 0x32173845
// declared property getter: - (int)itemChangeType;	// 0x32173915
- (id)message;	// 0x321783dd
- (ASNote *)note;	// 0x32189b65
// declared property getter: - (id)serverId;	// 0x32173939
// declared property setter: - (void)setChangeId:(int)anId;	// 0x3217395d
- (id)stringForItemChangeType:(int)itemChangeType;	// 0x321733ed
- (ASToDo *)toDo;	// 0x3217a62d
@end

