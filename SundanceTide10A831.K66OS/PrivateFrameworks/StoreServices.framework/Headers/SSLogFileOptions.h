/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSString;

@interface SSLogFileOptions : NSObject <NSCopying> {
	NSString *_directoryPath;	// 4 = 0x4
	NSString *_fileName;	// 8 = 0x8
	int _maxNumberOfLogFiles;	// 12 = 0xc
	unsigned long _maxSizeInBytes;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *logDirectoryPath;	// G=0x3780445d; S=0x37804471; @synthesize=_directoryPath
@property(copy, nonatomic) NSString *logFileBaseName;	// G=0x37804481; S=0x37804495; @synthesize=_fileName
@property(assign, nonatomic) unsigned long maxLogFileSize;	// G=0x378044a5; S=0x378044b5; @synthesize=_maxSizeInBytes
@property(assign, nonatomic) int maxNumberOfLogFiles;	// G=0x378044c5; S=0x378044d5; @synthesize=_maxNumberOfLogFiles
- (id)init;	// 0x378042f9
- (id)copyWithZone:(NSZone *)zone;	// 0x378043ad
- (void)dealloc;	// 0x37804349
// declared property getter: - (id)logDirectoryPath;	// 0x3780445d
// declared property getter: - (id)logFileBaseName;	// 0x37804481
// declared property getter: - (unsigned long)maxLogFileSize;	// 0x378044a5
// declared property getter: - (int)maxNumberOfLogFiles;	// 0x378044c5
// declared property setter: - (void)setLogDirectoryPath:(id)path;	// 0x37804471
// declared property setter: - (void)setLogFileBaseName:(id)name;	// 0x37804495
// declared property setter: - (void)setMaxLogFileSize:(unsigned long)size;	// 0x378044b5
// declared property setter: - (void)setMaxNumberOfLogFiles:(int)logFiles;	// 0x378044d5
@end

