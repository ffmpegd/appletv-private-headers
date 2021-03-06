/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCPPackagePart.h"
#import "OfficeImport-Structs.h"

@class OISFUZipEntry;

@interface OCPZipPackagePart : OCPPackagePart {
	OISFUZipEntry *mEntry;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) OISFUZipEntry *zipEntry;	// G=0x319046e5; @synthesize=mEntry
- (id)initWithArchive:(id)archive location:(id)location package:(id)package;	// 0x3180c415
- (void)copyToFile:(id)file;	// 0x319046c5
- (id)data;	// 0x3181c63d
- (void)dealloc;	// 0x318277cd
- (xmlDoc *)xmlDocument;	// 0x3180ca45
- (xmlTextReader *)xmlReader;	// 0x31818841
// declared property getter: - (id)zipEntry;	// 0x319046e5
@end

