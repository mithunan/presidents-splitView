//
//  CSLanguageListController.h
//  Presidents
//
//  Created by Mithunan Ravendren on 2014-08-02.
//  Copyright (c) 2014 Mithunan Ravendren. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CSDetailViewController;

@interface CSLanguageListController : UITableViewController

@property (weak, nonatomic) CSDetailViewController *detailViewController;
@property (strong, nonatomic) NSArray *languageNames;
@property (strong, nonatomic) NSArray *languageCodes;

@end
