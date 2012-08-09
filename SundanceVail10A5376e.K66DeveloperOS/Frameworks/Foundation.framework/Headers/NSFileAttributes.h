/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSDictionary.h> // Unknown library

@class NSDate, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSFileAttributes : NSDictionary {
	NSMutableDictionary *dict;	// 4 = 0x4
	stat statInfo;	// 8 = 0x8
	struct {
		BOOL extensionHidden;
		NSDate *creationDate;
		fields validFields;
	} catInfo;	// 116 = 0x74
	NSDictionary *extendedAttrs;	// 128 = 0x80
	int fileProtectionClass;	// 132 = 0x84
}
+ (id)_attributesAtPath:(id)path partialReturn:(BOOL)aReturn filterResourceFork:(BOOL)fork error:(id *)error;	// 0x34d576d1
+ (id)_attributesAtURL:(id)url partialReturn:(BOOL)aReturn filterResourceFork:(BOOL)fork error:(id *)error;	// 0x34d9a351
+ (id)attributesAtPath:(id)path traverseLink:(BOOL)link;	// 0x34d9a275
+ (id)attributesWithStat:(stat *)stat;	// 0x34d57845
- (unsigned)count;	// 0x34d9ac31
- (void)dealloc;	// 0x34d5fe55
- (id)fileGroupOwnerAccountName;	// 0x34d9ae2d
- (unsigned)fileGroupOwnerAccountNumber;	// 0x34d9ae79
- (id)fileModificationDate;	// 0x34d9ad39
- (id)fileOwnerAccountName;	// 0x34d9adcd
- (unsigned)fileOwnerAccountNumber;	// 0x34d9ae19
- (unsigned)filePosixPermissions;	// 0x34d9adb5
- (unsigned long long)fileSize;	// 0x34d9ad21
- (unsigned)fileSystemFileNumber;	// 0x34d9ae9d
- (int)fileSystemNumber;	// 0x34d9ae8d
- (id)fileType;	// 0x34d9ada1
- (unsigned)hash;	// 0x34d9a5bd
- (BOOL)isDirectory;	// 0x34d9aeb1
- (BOOL)isEqual:(id)equal;	// 0x34d9aa51
- (id)keyEnumerator;	// 0x34d9aca9
- (id)objectForKey:(id)key;	// 0x34d57c01
@end
