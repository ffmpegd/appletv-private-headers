/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class NSDate, ASEventUID, NSString;

@interface ASMeetingResponseItem : NSObject {
	NSString *_deliveryItemFolderId;	// 4 = 0x4
	NSString *_deliveryItemServerId;	// 8 = 0x8
	int _meetingResponse;	// 12 = 0xc
	ASEventUID *_eventUID;	// 16 = 0x10
	NSString *_instanceId;	// 20 = 0x14
	NSString *_calEventServerId;	// 24 = 0x18
	int _status;	// 28 = 0x1c
	id _context;	// 32 = 0x20
	NSDate *_instanceDate;	// 36 = 0x24
}
@property(retain) NSString *calEventServerId;	// G=0x339d6e4d; S=0x339d6e61; @synthesize=_calEventServerId
@property(retain) id context;	// G=0x339d6e9d; S=0x339d6eb1; @synthesize=_context
@property(readonly, assign) NSString *deliveryItemFolderId;	// G=0x339d6de9; @synthesize=_deliveryItemFolderId
@property(readonly, assign) NSString *deliveryItemServerId;	// G=0x339d6dfd; @synthesize=_deliveryItemServerId
@property(readonly, assign) ASEventUID *eventUID;	// G=0x339d6e39; @synthesize=_eventUID
@property(readonly, assign) NSDate *instanceDate;	// G=0x339d6e11; @synthesize=_instanceDate
@property(readonly, assign) int meetingResponse;	// G=0x339d6e25; @synthesize=_meetingResponse
@property(assign) int status;	// G=0x339d6e71; S=0x339d6e85; @synthesize=_status
- (id)initWithDeliveryItemFolderId:(id)deliveryItemFolderId deliveryItemServerId:(id)anId instanceDate:(id)date meetingResponse:(int)response eventUID:(id)uid;	// 0x339d6b9d
// declared property getter: - (id)calEventServerId;	// 0x339d6e4d
// declared property getter: - (id)context;	// 0x339d6e9d
- (void)dealloc;	// 0x339d6d35
// declared property getter: - (id)deliveryItemFolderId;	// 0x339d6de9
// declared property getter: - (id)deliveryItemServerId;	// 0x339d6dfd
- (id)description;	// 0x339d6c59
// declared property getter: - (id)eventUID;	// 0x339d6e39
// declared property getter: - (id)instanceDate;	// 0x339d6e11
// declared property getter: - (int)meetingResponse;	// 0x339d6e25
// declared property setter: - (void)setCalEventServerId:(id)anId;	// 0x339d6e61
// declared property setter: - (void)setContext:(id)context;	// 0x339d6eb1
// declared property setter: - (void)setStatus:(int)status;	// 0x339d6e85
// declared property getter: - (int)status;	// 0x339d6e71
@end
