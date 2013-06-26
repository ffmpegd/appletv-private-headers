/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSString;

@interface OCCDecryptor : NSObject {
	NSString *mOutputFilename;	// 4 = 0x4
	NSString *mBaseStringForOutputFilename;	// 8 = 0x8
	OCCStreamer *mStreamer;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *outputFilename;	// G=0x34a61b99; @synthesize=mOutputFilename
+ (id)agileDescriptorNamespace;	// 0x34a61ba9
+ (id)agilePasswordKeyEncryptorNamespace;	// 0x34a61bf9
+ (id)allocTempFileWithBase:(id)base outFilename:(id *)filename;	// 0x34a61a31
- (id)initWithStreamer:(OCCStreamer *)streamer;	// 0x34a6172d
- (void)dealloc;	// 0x34a616b9
- (BOOL)decrypt;	// 0x34a61871
- (BOOL)decryptIntoOutputFile;	// 0x34a619d5
- (void)deleteOutputFile;	// 0x34a61809
- (BOOL)isReadProtectedUsingDefaultPassphrase;	// 0x34a617b1
// declared property getter: - (id)outputFilename;	// 0x34a61b99
- (BOOL)verifyPassphrase:(id)passphrase;	// 0x34a61979
@end
