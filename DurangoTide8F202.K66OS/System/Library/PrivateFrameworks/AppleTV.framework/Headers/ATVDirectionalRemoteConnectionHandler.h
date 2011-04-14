/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class ATVTCPControlReceiver, NSMutableData;

__attribute__((visibility("hidden")))
@interface ATVDirectionalRemoteConnectionHandler : NSObject {
@private
	ATVTCPControlReceiver *_controlReceiver;	// 4 = 0x4
	unsigned _receiverDecryptionKey;	// 8 = 0x8
	NSMutableData *_remainderData;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
}
@property(assign) id delegate;	// G=0x336ceb81; S=0x336ceb91; converted property
- (id)init;	// 0x336cec3d
- (id)_checkDataIntegrity:(id)integrity;	// 0x336cef51
- (unsigned long)_decryptReceivedWord:(unsigned long)word;	// 0x336cf331
- (void)_processTouchCommand:(id)command;	// 0x336cf5dd
- (void)_promptReceived:(id)received;	// 0x336cecb1
- (void)_setupControlReceiver:(id)receiver encryptionKey:(unsigned long)key;	// 0x336cf151
- (void)allConnectionsClosed:(id)closed;	// 0x336cf121
- (void)dealloc;	// 0x336ceba1
// converted property getter: - (id)delegate;	// 0x336ceb81
- (void)newBytesReceived:(id)received data:(id)data;	// 0x336cf345
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x336ceb91
@end
