/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFWeakObject.h"

@class Message;

@interface MessageBody : MFWeakObject {
	Message *_message;	// 4 = 0x4
}
@property(retain) Message *message;	// G=0x31500c61; S=0x31500d05; converted property
- (id)attachments;	// 0x31500d89
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html;	// 0x31500cb9
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x31500c55
- (void)dealloc;	// 0x31500db1
- (id)htmlContent;	// 0x31500c79
- (id)htmlContentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x31500c95
- (BOOL)isHTML;	// 0x31500c59
- (BOOL)isRich;	// 0x31500c5d
// converted property getter: - (id)message;	// 0x31500c61
- (unsigned)numberOfAttachmentsSigned:(BOOL *)attachmentsSigned encrypted:(BOOL *)encrypted;	// 0x31500c71
- (id)rawData;	// 0x31500ce5
// converted property setter: - (void)setMessage:(id)message;	// 0x31500d05
- (id)textHtmlPart;	// 0x31500c75
@end

