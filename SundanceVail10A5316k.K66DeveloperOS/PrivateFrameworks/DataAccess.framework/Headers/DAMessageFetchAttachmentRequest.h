/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface DAMessageFetchAttachmentRequest : NSObject {
	NSString *_messageID;	// 4 = 0x4
	NSString *_attachmentName;	// 8 = 0x8
}
@property(readonly, retain) NSString *attachmentName;	// G=0x33562ced; converted property
@property(readonly, retain) NSString *messageID;	// G=0x33562cdd; converted property
- (id)initWithAttachmentName:(id)attachmentName andMessageServerID:(id)anId;	// 0x33562a39
// converted property getter: - (id)attachmentName;	// 0x33562ced
- (void)dealloc;	// 0x33562c79
- (id)description;	// 0x33562c01
- (unsigned)hash;	// 0x33562ab1
- (BOOL)isEqual:(id)equal;	// 0x33562b3d
// converted property getter: - (id)messageID;	// 0x33562cdd
@end

