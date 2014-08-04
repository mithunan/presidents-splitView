//
//  CSMasterViewController.h
//  Presidents
//
//  Created by Data Department on 2014-07-31.
//  Copyright (c) 2014 Mithunan Ravendren. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CSDetailViewController;

@interface CSMasterViewController : UITableViewController

@property (strong, nonatomic) CSDetailViewController *detailViewController;
@property (copy, nonatomic) NSArray *presidents;
@property (strong, nonatomic)  NSMutableArray *objects;

@end
