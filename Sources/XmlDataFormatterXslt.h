//
//  XmlDataFormatterXslt.h
//  XMLWebKitPlugin
//
//  Created by Marc Liyanage on 02.03.09.
//  Copyright 2009 Marc Liyanage <http://www.entropy.ch>. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "XmlDataFormatter.h"

@interface XmlDataFormatterXslt : XmlDataFormatter {

}

- (NSString *)storeError:(NSError *)error forStage:(NSString *)stage;
- (NSData *)prettyPrintedData;
- (NSString *)xpathEscapeString:(NSString *)string;
- (NSXMLDocument *)transformData:(NSData *)inputData;

@end
