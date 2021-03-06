/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MessageBody.h"

@class MimePart;

@interface MimeBody : MessageBody {
	MimePart *_topLevelPart;	// 8 = 0x8
	unsigned _preferredAlternative : 16;	// 12 = 0xc
	unsigned _numAlternatives : 16;	// 14 = 0xe
}
@property(assign) int preferredAlternative;	// G=0x34603c01; S=0x34603b5d; converted property
@property(retain) MimePart *topLevelPart;	// G=0x346034e1; S=0x346034f1; converted property
+ (id)copyNewMimeBoundary;	// 0x346033f1
+ (id)versionString;	// 0x34603335
- (id)init;	// 0x34603451
- (id)attachments;	// 0x346037e9
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x34603959
- (void)dealloc;	// 0x34603495
- (id)firstPartPassingTest:(id)test;	// 0x346036ed
- (BOOL)isHTML;	// 0x34603829
- (BOOL)isRich;	// 0x346038c1
- (id)mimeSubtype;	// 0x3460356d
- (id)mimeType;	// 0x34603545
- (int)numberOfAlternatives;	// 0x34603a91
- (unsigned)numberOfAttachmentsSigned:(BOOL *)attachmentsSigned encrypted:(BOOL *)encrypted;	// 0x3460378d
- (id)partWithNumber:(id)number;	// 0x34603595
// converted property getter: - (int)preferredAlternative;	// 0x34603c01
- (id)preferredBodyPart;	// 0x34603d5d
// converted property setter: - (void)setPreferredAlternative:(int)alternative;	// 0x34603b5d
// converted property setter: - (void)setTopLevelPart:(id)part;	// 0x346034f1
- (id)textHtmlPart;	// 0x34603e15
// converted property getter: - (id)topLevelPart;	// 0x346034e1
- (unsigned)totalTextSize;	// 0x34603a71
@end

