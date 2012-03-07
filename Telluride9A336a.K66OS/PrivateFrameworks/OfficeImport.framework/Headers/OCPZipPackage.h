/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCPPackage.h"

@class NSMutableDictionary, SFUZipArchive;

__attribute__((visibility("hidden")))
@interface OCPZipPackage : OCPPackage {
@private
	SFUZipArchive *mArchive;	// 20 = 0x14
	NSMutableDictionary *mParts;	// 24 = 0x18
}
- (id)initWithArchive:(id)archive;	// 0x34d017e1
- (id)initWithData:(id)data;	// 0x34d5b989
- (id)initWithPath:(id)path;	// 0x34cff139
- (void)dealloc;	// 0x34d1e575
- (id)partForLocation:(id)location;	// 0x34d04d05
- (void)resetPartForLocation:(id)location;	// 0x34d2475d
@end

