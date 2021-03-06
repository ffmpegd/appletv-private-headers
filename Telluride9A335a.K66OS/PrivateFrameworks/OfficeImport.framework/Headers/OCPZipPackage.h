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
- (id)initWithArchive:(id)archive;	// 0x352a97e1
- (id)initWithData:(id)data;	// 0x35303989
- (id)initWithPath:(id)path;	// 0x352a7139
- (void)dealloc;	// 0x352c6575
- (id)partForLocation:(id)location;	// 0x352acd05
- (void)resetPartForLocation:(id)location;	// 0x352cc75d
@end

