//
//  SecondTableViewController.h
//  XMLPARSING
//
//  Created by Student-002 on 28/11/16.
//  Copyright © 2016 Felix-its. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SecondTableViewController : UITableViewController<NSXMLParserDelegate>

@property(nonatomic,retain)NSMutableArray *plantarray;

@property (nonatomic, retain)NSMutableString *str, *tempstr, *str2;

@property(nonatomic,retain)NSXMLParser *saxparser;

@end
