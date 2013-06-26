/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCMapper.h"

@class OCDReader, NSData, CPImportTracing, NSURL;

@interface OCImporter : OCMapper {
	NSURL *mURL;	// 12 = 0xc
	NSData *mData;	// 16 = 0x10
	OCDReader *mReader;	// 20 = 0x14
	CPImportTracing *mTracing;	// 24 = 0x18
	BOOL mTryAlternateReader;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) CPImportTracing *tracing;	// G=0x34c3dd2d; @synthesize=mTracing
+ (void)initialize;	// 0x349d87dd
- (id)initWithData:(id)data;	// 0x34c3d861
- (id)initWithURL:(id)url;	// 0x34c3d7c5
- (void)dealloc;	// 0x34c3d8f1
- (id)filename;	// 0x34c3dd0d
- (BOOL)isDocumentEncryptedUnsupportedVersion:(BOOL *)version errorMessage:(id *)message;	// 0x34c3dc41
- (BOOL)isDocumentEncryptedUnsupportedVersionHelper:(BOOL *)helper errorMessage:(id *)message readError:(BOOL *)error;	// 0x34c3d9d1
- (BOOL)isXML;	// 0x34c3dd3d
- (BOOL)setPassphrase:(id)passphrase;	// 0x34c3dcd5
- (void)setURL:(id)url;	// 0x34c3d97d
- (BOOL)start;	// 0x34c3dd41
// declared property getter: - (id)tracing;	// 0x34c3dd2d
- (BOOL)tryAlternateReader;	// 0x34c3d9c1
@end
