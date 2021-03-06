/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVBaseFeedDocumentFactory.h"


__attribute__((visibility("hidden")))
@interface ATVFeedDocumentFactory : ATVBaseFeedDocumentFactory {
}
+ (void)_evaluateScripts:(id)scripts inContext:(id)context;	// 0x13e425
+ (id)_feedDocumentWithPlist:(id)plist error:(id *)error;	// 0x13e421
+ (id)_feedDocumentWithXML:(id)xml error:(id *)error;	// 0x13e351
+ (id)feedDocumentFromURLDocument:(id)urldocument error:(id *)error;	// 0x13d9a5
+ (id)feedDocumentWithXMLData:(id)xmldata merchant:(id)merchant sourceURL:(id)url error:(id *)error;	// 0x13da21
+ (id)feedDocumentWithXMLDocument:(id)xmldocument merchant:(id)merchant sourceURL:(id)url error:(id *)error;	// 0x13db45
+ (id)feedDocumentWithXMLDocument:(id)xmldocument merchant:(id)merchant sourceURL:(id)url jsContext:(id)context jsXMLDocument:(id)document error:(id *)error;	// 0x13dba1
+ (BOOL)updateFeedDocument:(id)document withXMLDocument:(id)xmldocument error:(id *)error;	// 0x13e12d
@end

