/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MessageStore.h"

@class NSData;

@interface MFDataMessageStore : MessageStore {
	NSData *_data;	// 24 = 0x18
	Class _messageClass;	// 28 = 0x1c
}
- (id)initWithData:(id)data;	// 0x31d47c05
- (id)_cachedBodyDataForMessage:(id)message valueIfNotPresent:(id)present;	// 0x31d47c5d
- (id)_cachedBodyForMessage:(id)message valueIfNotPresent:(id)present;	// 0x31d47bf9
- (id)_cachedHeadersForMessage:(id)message valueIfNotPresent:(id)present;	// 0x31d47bfd
- (id)account;	// 0x31d47bf5
- (id)bodyDataForMessage:(id)message isComplete:(BOOL *)complete isPartial:(BOOL *)partial downloadIfNecessary:(BOOL)necessary;	// 0x31d47c7d
- (void)dealloc;	// 0x31d47ed9
- (id)headerDataForMessage:(id)message downloadIfNecessary:(BOOL)necessary;	// 0x31d47d5d
- (id)mailboxUid;	// 0x31d47c01
- (id)message;	// 0x31d47e39
- (void)setMessageClass:(Class)aClass;	// 0x31d47be5
- (id)storePath;	// 0x31d47ed5
- (void)writeUpdatedMessageDataToDisk;	// 0x31d47be1
@end
