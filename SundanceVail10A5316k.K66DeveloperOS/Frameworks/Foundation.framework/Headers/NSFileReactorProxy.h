/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSFileAccessNode;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NSFileReactorProxy : NSObject {
@private
	NSObject<OS_xpc_object> *_client;	// 4 = 0x4
	id _reactorID;	// 8 = 0x8
	id _messageSender;	// 12 = 0xc
	NSFileAccessNode *_itemLocation;	// 16 = 0x10
}
@property(retain) NSFileAccessNode *itemLocation;	// G=0x31b05769; S=0x31b05765; converted property
@property(readonly, retain) id messageSender;	// G=0x31b0572d; converted property
@property(readonly, retain) id reactorID;	// G=0x31b056f5; converted property
- (id)initWithClient:(id)client reactorID:(id)anId messageSender:(id)sender;	// 0x31b05599
- (id)client;	// 0x31b056e5
- (void)dealloc;	// 0x31b05631
- (id)description;	// 0x31b0584d
- (id)descriptionWithIndenting:(id)indenting;	// 0x31b057a5
- (void)finalize;	// 0x31b056a5
- (void)forwardUsingMessageSender:(id)sender;	// 0x31b057a1
// converted property getter: - (id)itemLocation;	// 0x31b05769
// converted property getter: - (id)messageSender;	// 0x31b0572d
// converted property getter: - (id)reactorID;	// 0x31b056f5
// converted property setter: - (void)setItemLocation:(id)location;	// 0x31b05765
@end
